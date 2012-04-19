#include <QApplication>

 #include "chatdialog.h"

 #include <QtCore/QSettings>
 #include <QtNetwork/QNetworkConfigurationManager>
 #include <QtNetwork/QNetworkSession>

 int main(int argc, char *argv[])
 {
     QApplication app(argc, argv);

     QNetworkConfigurationManager manager;
     if (manager.capabilities() & QNetworkConfigurationManager::NetworkSessionRequired) {
         // Get saved network configuration
         QSettings settings(QSettings::UserScope, QLatin1String("Trolltech"));
         settings.beginGroup(QLatin1String("QtNetwork"));
         const QString id = settings.value(QLatin1String("DefaultNetworkConfiguration")).toString();
         settings.endGroup();

         // If the saved network configuration is not currently discovered use the system default
         QNetworkConfiguration config = manager.configurationFromIdentifier(id);
         if ((config.state() & QNetworkConfiguration::Discovered) !=
             QNetworkConfiguration::Discovered) {
             config = manager.defaultConfiguration();
         }

         QNetworkSession *networkSession = new QNetworkSession(config, &app);
         networkSession->open();
         networkSession->waitForOpened();

         if (networkSession->isOpen()) {
             // Save the used configuration
             QNetworkConfiguration config = networkSession->configuration();
             QString id;
             if (config.type() == QNetworkConfiguration::UserChoice) {
                 id = networkSession->sessionProperty(
                         QLatin1String("UserChoiceConfiguration")).toString();
             } else {
                 id = config.identifier();
             }

             QSettings settings(QSettings::UserScope, QLatin1String("Trolltech"));
             settings.beginGroup(QLatin1String("QtNetwork"));
             settings.setValue(QLatin1String("DefaultNetworkConfiguration"), id);
             settings.endGroup();
         }
     }

     ChatDialog dialog;
 #ifdef Q_OS_SYMBIAN
     // Make application better looking and more usable on small screen
     dialog.showMaximized();
 #else
     dialog.show();
 #endif
     return app.exec();
 }
