#############################################################################
# Makefile for building: Battleship-game
# Generated by qmake (2.01a) (Qt 4.7.3) on: Wed May 2 03:39:06 2012
# Project:  Battleship-game.pro
# Template: app
# Command: /home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/qmake -o Makefile Battleship-game.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_DECLARATIVE_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/default -I. -I../../../QtSDK/Desktop/Qt/473/gcc/include/QtCore -I../../../QtSDK/Desktop/Qt/473/gcc/include/QtNetwork -I../../../QtSDK/Desktop/Qt/473/gcc/include/QtGui -I../../../QtSDK/Desktop/Qt/473/gcc/include/QtDeclarative -I../../../QtSDK/Desktop/Qt/473/gcc/include -I. -Iuntitled -Iuntitled/qmlapplicationviewer -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/lib
LIBS          = $(SUBLIBS)  -L/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/lib -lQtDeclarative -lQtGui -lQtNetwork -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = AI.cpp \
		AI_main.cpp \
		battleaigame.cpp \
		battlelocalgame.cpp \
		battlenetworkgame.cpp \
		battlenetworkwindow.cpp \
		Board.cpp \
		chatdialog.cpp \
		client.cpp \
		connection.cpp \
		InitialWindow.cpp \
		Location.cpp \
		main.cpp \
		peermanager.cpp \
		server.cpp \
		Ship.cpp \
		untitled/battleaigame.cpp \
		untitled/battlelocalwindow.cpp \
		untitled/battlenetworkgame.cpp \
		untitled/battlenetworkwindow.cpp \
		untitled/Board.cpp \
		untitled/chatdialog.cpp \
		untitled/client.cpp \
		untitled/connection.cpp \
		untitled/InitialWindow.cpp \
		untitled/Location.cpp \
		untitled/main.cpp \
		untitled/peermanager.cpp \
		untitled/server.cpp \
		untitled/Ship.cpp \
		untitled/qmlapplicationviewer/qmlapplicationviewer.cpp moc_battleaigame.cpp \
		moc_battlelocalgame.cpp \
		moc_battlenetworkgame.cpp \
		moc_battlenetworkwindow.cpp \
		moc_chatdialog.cpp \
		moc_client.cpp \
		moc_connection.cpp \
		moc_InitialWindow.cpp \
		moc_peermanager.cpp \
		moc_server.cpp \
		moc_battlelocalwindow.cpp \
		moc_qmlapplicationviewer.cpp
OBJECTS       = AI.o \
		AI_main.o \
		battleaigame.o \
		battlelocalgame.o \
		battlenetworkgame.o \
		battlenetworkwindow.o \
		Board.o \
		chatdialog.o \
		client.o \
		connection.o \
		InitialWindow.o \
		Location.o \
		main.o \
		peermanager.o \
		server.o \
		Ship.o \
		battleaigame.o \
		battlelocalwindow.o \
		battlenetworkgame.o \
		battlenetworkwindow.o \
		Board.o \
		chatdialog.o \
		client.o \
		connection.o \
		InitialWindow.o \
		Location.o \
		main.o \
		peermanager.o \
		server.o \
		Ship.o \
		qmlapplicationviewer.o \
		moc_battleaigame.o \
		moc_battlelocalgame.o \
		moc_battlenetworkgame.o \
		moc_battlenetworkwindow.o \
		moc_chatdialog.o \
		moc_client.o \
		moc_connection.o \
		moc_InitialWindow.o \
		moc_peermanager.o \
		moc_server.o \
		moc_battlelocalwindow.o \
		moc_qmlapplicationviewer.o
DIST          = ../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/g++.conf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/unix.conf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/linux.conf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/qconfig.pri \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/modules/qt_webkit_version.pri \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt_functions.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt_config.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/exclusive_builds.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/default_pre.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/release.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/default_post.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/warn_on.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/unix/thread.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/moc.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/resources.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/uic.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/yacc.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/lex.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/include_source_dir.prf \
		Battleship-game.pro
QMAKE_TARGET  = Battleship-game
DESTDIR       = 
TARGET        = Battleship-game

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_battleaigame.h ui_battlelocalgame.h ui_battlenetworkgame.h ui_battlenetworkwindow.h ui_chatdialog.h ui_InitialWindow.h ui_battlelocalwindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: Battleship-game.pro  ../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/default/qmake.conf ../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/g++.conf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/unix.conf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/linux.conf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/qconfig.pri \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/modules/qt_webkit_version.pri \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt_functions.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt_config.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/exclusive_builds.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/default_pre.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/release.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/default_post.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/warn_on.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/unix/thread.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/moc.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/resources.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/uic.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/yacc.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/lex.prf \
		../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/include_source_dir.prf
	$(QMAKE) -o Makefile Battleship-game.pro
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/g++.conf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/unix.conf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/linux.conf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/qconfig.pri:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/modules/qt_webkit_version.pri:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt_functions.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt_config.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/exclusive_builds.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/default_pre.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/release.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/default_post.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/warn_on.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/unix/thread.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/moc.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/resources.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/uic.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/yacc.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/lex.prf:
../../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/include_source_dir.prf:
qmake:  FORCE
	@$(QMAKE) -o Makefile Battleship-game.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/Battleship-game1.0.0 || $(MKDIR) .tmp/Battleship-game1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Battleship-game1.0.0/ && $(COPY_FILE) --parents AI.h battleaigame.h battlelocalgame.h battlenetworkgame.h battlenetworkwindow.h Board.h chatdialog.h client.h connection.h InitialWindow.h Location.h peermanager.h server.h Ship.h untitled/battleaigame.h untitled/battlelocalwindow.h untitled/battlenetworkgame.h untitled/battlenetworkwindow.h untitled/Board.h untitled/chatdialog.h untitled/client.h untitled/connection.h untitled/InitialWindow.h untitled/Location.h untitled/peermanager.h untitled/server.h untitled/Ship.h untitled/qmlapplicationviewer/qmlapplicationviewer.h .tmp/Battleship-game1.0.0/ && $(COPY_FILE) --parents AI.cpp AI_main.cpp battleaigame.cpp battlelocalgame.cpp battlenetworkgame.cpp battlenetworkwindow.cpp Board.cpp chatdialog.cpp client.cpp connection.cpp InitialWindow.cpp Location.cpp main.cpp peermanager.cpp server.cpp Ship.cpp untitled/battleaigame.cpp untitled/battlelocalwindow.cpp untitled/battlenetworkgame.cpp untitled/battlenetworkwindow.cpp untitled/Board.cpp untitled/chatdialog.cpp untitled/client.cpp untitled/connection.cpp untitled/InitialWindow.cpp untitled/Location.cpp untitled/main.cpp untitled/peermanager.cpp untitled/server.cpp untitled/Ship.cpp untitled/qmlapplicationviewer/qmlapplicationviewer.cpp .tmp/Battleship-game1.0.0/ && $(COPY_FILE) --parents battleaigame.ui battlelocalgame.ui battlenetworkgame.ui battlenetworkwindow.ui chatdialog.ui InitialWindow.ui untitled/battleaigame.ui untitled/battlelocalwindow.ui untitled/battlenetworkgame.ui untitled/battlenetworkwindow.ui untitled/chatdialog.ui untitled/InitialWindow.ui .tmp/Battleship-game1.0.0/ && (cd `dirname .tmp/Battleship-game1.0.0` && $(TAR) Battleship-game1.0.0.tar Battleship-game1.0.0 && $(COMPRESS) Battleship-game1.0.0.tar) && $(MOVE) `dirname .tmp/Battleship-game1.0.0`/Battleship-game1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Battleship-game1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_battleaigame.cpp moc_battlelocalgame.cpp moc_battlenetworkgame.cpp moc_battlenetworkwindow.cpp moc_chatdialog.cpp moc_client.cpp moc_connection.cpp moc_InitialWindow.cpp moc_peermanager.cpp moc_server.cpp moc_battleaigame.cpp moc_battlelocalwindow.cpp moc_battlenetworkgame.cpp moc_battlenetworkwindow.cpp moc_chatdialog.cpp moc_client.cpp moc_connection.cpp moc_InitialWindow.cpp moc_peermanager.cpp moc_server.cpp moc_qmlapplicationviewer.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_battleaigame.cpp moc_battlelocalgame.cpp moc_battlenetworkgame.cpp moc_battlenetworkwindow.cpp moc_chatdialog.cpp moc_client.cpp moc_connection.cpp moc_InitialWindow.cpp moc_peermanager.cpp moc_server.cpp moc_battleaigame.cpp moc_battlelocalwindow.cpp moc_battlenetworkgame.cpp moc_battlenetworkwindow.cpp moc_chatdialog.cpp moc_client.cpp moc_connection.cpp moc_InitialWindow.cpp moc_peermanager.cpp moc_server.cpp moc_qmlapplicationviewer.cpp
moc_battleaigame.cpp: AI.h \
		Location.h \
		Board.h \
		Ship.h \
		battleaigame.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) battleaigame.h -o moc_battleaigame.cpp

moc_battlelocalgame.cpp: Board.h \
		Ship.h \
		Location.h \
		battlelocalgame.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) battlelocalgame.h -o moc_battlelocalgame.cpp

moc_battlenetworkgame.cpp: Board.h \
		Ship.h \
		Location.h \
		client.h \
		server.h \
		battlenetworkgame.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) battlenetworkgame.h -o moc_battlenetworkgame.cpp

moc_battlenetworkwindow.cpp: client.h \
		server.h \
		battlenetworkwindow.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) battlenetworkwindow.h -o moc_battlenetworkwindow.cpp

moc_chatdialog.cpp: ui_chatdialog.h \
		client.h \
		server.h \
		chatdialog.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) chatdialog.h -o moc_chatdialog.cpp

moc_client.cpp: server.h \
		client.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) client.h -o moc_client.cpp

moc_connection.cpp: connection.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) connection.h -o moc_connection.cpp

moc_InitialWindow.cpp: ui_InitialWindow.h \
		battlenetworkwindow.h \
		client.h \
		server.h \
		battleaigame.h \
		AI.h \
		Location.h \
		Board.h \
		Ship.h \
		battlelocalwindow.h \
		InitialWindow.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) InitialWindow.h -o moc_InitialWindow.cpp

moc_peermanager.cpp: peermanager.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) peermanager.h -o moc_peermanager.cpp

moc_server.cpp: server.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) server.h -o moc_server.cpp

moc_battleaigame.cpp: untitled/AI.h \
		untitled/Location.h \
		untitled/Board.h \
		untitled/Ship.h \
		untitled/battleaigame.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) untitled/battleaigame.h -o moc_battleaigame.cpp

moc_battlelocalwindow.cpp: untitled/Board.h \
		untitled/Ship.h \
		untitled/Location.h \
		untitled/battlelocalwindow.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) untitled/battlelocalwindow.h -o moc_battlelocalwindow.cpp

moc_battlenetworkgame.cpp: untitled/Board.h \
		untitled/Ship.h \
		untitled/Location.h \
		untitled/client.h \
		untitled/server.h \
		untitled/battlenetworkgame.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) untitled/battlenetworkgame.h -o moc_battlenetworkgame.cpp

moc_battlenetworkwindow.cpp: untitled/client.h \
		untitled/server.h \
		untitled/battlenetworkwindow.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) untitled/battlenetworkwindow.h -o moc_battlenetworkwindow.cpp

moc_chatdialog.cpp: ui_chatdialog.h \
		untitled/client.h \
		untitled/server.h \
		untitled/chatdialog.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) untitled/chatdialog.h -o moc_chatdialog.cpp

moc_client.cpp: untitled/server.h \
		untitled/client.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) untitled/client.h -o moc_client.cpp

moc_connection.cpp: untitled/connection.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) untitled/connection.h -o moc_connection.cpp

moc_InitialWindow.cpp: ui_InitialWindow.h \
		untitled/battlenetworkwindow.h \
		untitled/client.h \
		untitled/server.h \
		untitled/battleaigame.h \
		untitled/AI.h \
		untitled/Location.h \
		untitled/Board.h \
		untitled/Ship.h \
		battlelocalwindow.h \
		Board.h \
		Ship.h \
		Location.h \
		untitled/InitialWindow.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) untitled/InitialWindow.h -o moc_InitialWindow.cpp

moc_peermanager.cpp: untitled/peermanager.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) untitled/peermanager.h -o moc_peermanager.cpp

moc_server.cpp: untitled/server.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) untitled/server.h -o moc_server.cpp

moc_qmlapplicationviewer.cpp: untitled/qmlapplicationviewer/qmlapplicationviewer.h
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) untitled/qmlapplicationviewer/qmlapplicationviewer.h -o moc_qmlapplicationviewer.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_battleaigame.h ui_battlelocalgame.h ui_battlenetworkgame.h ui_battlenetworkwindow.h ui_chatdialog.h ui_InitialWindow.h ui_battleaigame.h ui_battlelocalwindow.h ui_battlenetworkgame.h ui_battlenetworkwindow.h ui_chatdialog.h ui_InitialWindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_battleaigame.h ui_battlelocalgame.h ui_battlenetworkgame.h ui_battlenetworkwindow.h ui_chatdialog.h ui_InitialWindow.h ui_battleaigame.h ui_battlelocalwindow.h ui_battlenetworkgame.h ui_battlenetworkwindow.h ui_chatdialog.h ui_InitialWindow.h
ui_battleaigame.h: battleaigame.ui
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/uic battleaigame.ui -o ui_battleaigame.h

ui_battlelocalgame.h: battlelocalgame.ui
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/uic battlelocalgame.ui -o ui_battlelocalgame.h

ui_battlenetworkgame.h: battlenetworkgame.ui
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/uic battlenetworkgame.ui -o ui_battlenetworkgame.h

ui_battlenetworkwindow.h: battlenetworkwindow.ui
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/uic battlenetworkwindow.ui -o ui_battlenetworkwindow.h

ui_chatdialog.h: chatdialog.ui
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/uic chatdialog.ui -o ui_chatdialog.h

ui_InitialWindow.h: InitialWindow.ui
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/uic InitialWindow.ui -o ui_InitialWindow.h

ui_battleaigame.h: untitled/battleaigame.ui
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/uic untitled/battleaigame.ui -o ui_battleaigame.h

ui_battlelocalwindow.h: untitled/battlelocalwindow.ui
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/uic untitled/battlelocalwindow.ui -o ui_battlelocalwindow.h

ui_battlenetworkgame.h: untitled/battlenetworkgame.ui
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/uic untitled/battlenetworkgame.ui -o ui_battlenetworkgame.h

ui_battlenetworkwindow.h: untitled/battlenetworkwindow.ui
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/uic untitled/battlenetworkwindow.ui -o ui_battlenetworkwindow.h

ui_chatdialog.h: untitled/chatdialog.ui
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/uic untitled/chatdialog.ui -o ui_chatdialog.h

ui_InitialWindow.h: untitled/InitialWindow.ui
	/home/mickeyho/QtSDK/Desktop/Qt/473/gcc/bin/uic untitled/InitialWindow.ui -o ui_InitialWindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

AI.o: AI.cpp AI.h \
		Location.h \
		Board.h \
		Ship.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AI.o AI.cpp

AI_main.o: AI_main.cpp AI.h \
		Location.h \
		Board.h \
		Ship.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AI_main.o AI_main.cpp

battleaigame.o: battleaigame.cpp battleaigame.h \
		AI.h \
		Location.h \
		Board.h \
		Ship.h \
		ui_battleaigame.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o battleaigame.o battleaigame.cpp

battlelocalgame.o: battlelocalgame.cpp battlelocalgame.h \
		Board.h \
		Ship.h \
		Location.h \
		ui_battlelocalgame.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o battlelocalgame.o battlelocalgame.cpp

battlenetworkgame.o: battlenetworkgame.cpp battlenetworkgame.h \
		Board.h \
		Ship.h \
		Location.h \
		client.h \
		server.h \
		ui_battlenetworkgame.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o battlenetworkgame.o battlenetworkgame.cpp

battlenetworkwindow.o: battlenetworkwindow.cpp battlenetworkwindow.h \
		client.h \
		server.h \
		ui_battlenetworkwindow.h \
		battlenetworkgame.h \
		Board.h \
		Ship.h \
		Location.h \
		InitialWindow.h \
		ui_InitialWindow.h \
		battleaigame.h \
		AI.h \
		battlelocalwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o battlenetworkwindow.o battlenetworkwindow.cpp

Board.o: Board.cpp Board.h \
		Ship.h \
		Location.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Board.o Board.cpp

chatdialog.o: chatdialog.cpp chatdialog.h \
		ui_chatdialog.h \
		client.h \
		server.h \
		InitialWindow.h \
		ui_InitialWindow.h \
		battlenetworkwindow.h \
		battleaigame.h \
		AI.h \
		Location.h \
		Board.h \
		Ship.h \
		battlelocalwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o chatdialog.o chatdialog.cpp

client.o: client.cpp client.h \
		server.h \
		connection.h \
		peermanager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o client.o client.cpp

connection.o: connection.cpp connection.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o connection.o connection.cpp

InitialWindow.o: InitialWindow.cpp InitialWindow.h \
		ui_InitialWindow.h \
		battlenetworkwindow.h \
		client.h \
		server.h \
		battleaigame.h \
		AI.h \
		Location.h \
		Board.h \
		Ship.h \
		battlelocalwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o InitialWindow.o InitialWindow.cpp

Location.o: Location.cpp Location.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Location.o Location.cpp

main.o: main.cpp chatdialog.h \
		ui_chatdialog.h \
		client.h \
		server.h \
		InitialWindow.h \
		ui_InitialWindow.h \
		battlenetworkwindow.h \
		battleaigame.h \
		AI.h \
		Location.h \
		Board.h \
		Ship.h \
		battlelocalwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

peermanager.o: peermanager.cpp client.h \
		server.h \
		connection.h \
		peermanager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o peermanager.o peermanager.cpp

server.o: server.cpp connection.h \
		server.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o server.o server.cpp

Ship.o: Ship.cpp Board.h \
		Ship.h \
		Location.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Ship.o Ship.cpp

battleaigame.o: untitled/battleaigame.cpp untitled/battleaigame.h \
		untitled/AI.h \
		untitled/Location.h \
		untitled/Board.h \
		untitled/Ship.h \
		ui_battleaigame.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o battleaigame.o untitled/battleaigame.cpp

battlelocalwindow.o: untitled/battlelocalwindow.cpp battlelocalwindow.h \
		Board.h \
		Ship.h \
		Location.h \
		ui_battlelocalwindow.h \
		untitled/Board.h \
		untitled/Ship.h \
		untitled/Location.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o battlelocalwindow.o untitled/battlelocalwindow.cpp

battlenetworkgame.o: untitled/battlenetworkgame.cpp untitled/battlenetworkgame.h \
		untitled/Board.h \
		untitled/Ship.h \
		untitled/Location.h \
		untitled/client.h \
		untitled/server.h \
		ui_battlenetworkgame.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o battlenetworkgame.o untitled/battlenetworkgame.cpp

battlenetworkwindow.o: untitled/battlenetworkwindow.cpp untitled/battlenetworkwindow.h \
		untitled/client.h \
		untitled/server.h \
		ui_battlenetworkwindow.h \
		untitled/battlenetworkgame.h \
		untitled/Board.h \
		untitled/Ship.h \
		untitled/Location.h \
		untitled/InitialWindow.h \
		ui_InitialWindow.h \
		untitled/battleaigame.h \
		untitled/AI.h \
		battlelocalwindow.h \
		Board.h \
		Ship.h \
		Location.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o battlenetworkwindow.o untitled/battlenetworkwindow.cpp

Board.o: untitled/Board.cpp untitled/Board.h \
		untitled/Ship.h \
		untitled/Location.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Board.o untitled/Board.cpp

chatdialog.o: untitled/chatdialog.cpp untitled/chatdialog.h \
		ui_chatdialog.h \
		untitled/client.h \
		untitled/server.h \
		untitled/InitialWindow.h \
		ui_InitialWindow.h \
		untitled/battlenetworkwindow.h \
		untitled/battleaigame.h \
		untitled/AI.h \
		untitled/Location.h \
		untitled/Board.h \
		untitled/Ship.h \
		battlelocalwindow.h \
		Board.h \
		Ship.h \
		Location.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o chatdialog.o untitled/chatdialog.cpp

client.o: untitled/client.cpp untitled/client.h \
		untitled/server.h \
		untitled/connection.h \
		untitled/peermanager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o client.o untitled/client.cpp

connection.o: untitled/connection.cpp untitled/connection.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o connection.o untitled/connection.cpp

InitialWindow.o: untitled/InitialWindow.cpp untitled/InitialWindow.h \
		ui_InitialWindow.h \
		untitled/battlenetworkwindow.h \
		untitled/client.h \
		untitled/server.h \
		untitled/battleaigame.h \
		untitled/AI.h \
		untitled/Location.h \
		untitled/Board.h \
		untitled/Ship.h \
		battlelocalwindow.h \
		Board.h \
		Ship.h \
		Location.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o InitialWindow.o untitled/InitialWindow.cpp

Location.o: untitled/Location.cpp untitled/Location.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Location.o untitled/Location.cpp

main.o: untitled/main.cpp untitled/chatdialog.h \
		ui_chatdialog.h \
		untitled/client.h \
		untitled/server.h \
		untitled/InitialWindow.h \
		ui_InitialWindow.h \
		untitled/battlenetworkwindow.h \
		untitled/battleaigame.h \
		untitled/AI.h \
		untitled/Location.h \
		untitled/Board.h \
		untitled/Ship.h \
		battlelocalwindow.h \
		Board.h \
		Ship.h \
		Location.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o untitled/main.cpp

peermanager.o: untitled/peermanager.cpp untitled/client.h \
		untitled/server.h \
		untitled/connection.h \
		untitled/peermanager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o peermanager.o untitled/peermanager.cpp

server.o: untitled/server.cpp untitled/connection.h \
		untitled/server.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o server.o untitled/server.cpp

Ship.o: untitled/Ship.cpp untitled/Board.h \
		untitled/Ship.h \
		untitled/Location.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Ship.o untitled/Ship.cpp

qmlapplicationviewer.o: untitled/qmlapplicationviewer/qmlapplicationviewer.cpp untitled/qmlapplicationviewer/qmlapplicationviewer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qmlapplicationviewer.o untitled/qmlapplicationviewer/qmlapplicationviewer.cpp

moc_battleaigame.o: moc_battleaigame.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_battleaigame.o moc_battleaigame.cpp

moc_battlelocalgame.o: moc_battlelocalgame.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_battlelocalgame.o moc_battlelocalgame.cpp

moc_battlenetworkgame.o: moc_battlenetworkgame.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_battlenetworkgame.o moc_battlenetworkgame.cpp

moc_battlenetworkwindow.o: moc_battlenetworkwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_battlenetworkwindow.o moc_battlenetworkwindow.cpp

moc_chatdialog.o: moc_chatdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_chatdialog.o moc_chatdialog.cpp

moc_client.o: moc_client.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_client.o moc_client.cpp

moc_connection.o: moc_connection.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_connection.o moc_connection.cpp

moc_InitialWindow.o: moc_InitialWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_InitialWindow.o moc_InitialWindow.cpp

moc_peermanager.o: moc_peermanager.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_peermanager.o moc_peermanager.cpp

moc_server.o: moc_server.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_server.o moc_server.cpp

moc_battlelocalwindow.o: moc_battlelocalwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_battlelocalwindow.o moc_battlelocalwindow.cpp

moc_qmlapplicationviewer.o: moc_qmlapplicationviewer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qmlapplicationviewer.o moc_qmlapplicationviewer.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

