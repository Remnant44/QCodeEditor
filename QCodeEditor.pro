QT += widgets
CONFIG += c++17

# Comment the following line to run a library build instead.
CONFIG += BUILD_EXAMPLE

BUILD_EXAMPLE {
	TEMPLATE = app
	INCLUDEPATH += $$PWD/example\include
	
	SOURCES += \
		$$PWD/example/src/MainWindow.cpp \
		$$PWD/example/src/main.cpp \
	
	HEADERS += \
		$$PWD/example/include/MainWindow.hpp \
		
	RESOURCES += \
		$$PWD/example/resources/demo_resources.qrc
} else {
	TEMPLATE = lib
	DEFINES += QCODEEDITOR_LIBRARY
}

include($$PWD/QCodeEditor.pri)

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
