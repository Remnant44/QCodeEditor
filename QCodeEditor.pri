QT += widgets

INCLUDEPATH += $$PWD/include

SOURCES += \
    $$PWD/src/internal/QCXXHighlighter.cpp \
    $$PWD/src/internal/QCodeEditor.cpp \
    $$PWD/src/internal/QGLSLCompleter.cpp \
    $$PWD/src/internal/QGLSLHighlighter.cpp \
    $$PWD/src/internal/QJSHighlighter.cpp \
    $$PWD/src/internal/QJSONHighlighter.cpp \
    $$PWD/src/internal/QJavaHighlighter.cpp \
    $$PWD/src/internal/QLanguage.cpp \
    $$PWD/src/internal/QLineNumberArea.cpp \
    $$PWD/src/internal/QLuaCompleter.cpp \
    $$PWD/src/internal/QLuaHighlighter.cpp \
    $$PWD/src/internal/QPythonCompleter.cpp \
    $$PWD/src/internal/QPythonHighlighter.cpp \
    $$PWD/src/internal/QStyleSyntaxHighlighter.cpp \
    $$PWD/src/internal/QSyntaxStyle.cpp \
    $$PWD/src/internal/QXMLHighlighter.cpp

HEADERS += \
    $$PWD/include/QCXXHighlighter \
    $$PWD/include/QCodeEditor \
    $$PWD/include/QGLSLCompleter \
    $$PWD/include/QGLSLHighlighter \
    $$PWD/include/QHighlightBlockRule \
    $$PWD/include/QHighlightRule \
    $$PWD/include/QJSHighlighter \
    $$PWD/include/QJSONHighlighter \
    $$PWD/include/QJavaHighlighter \
    $$PWD/include/QLanguage \
    $$PWD/include/QLineNumberArea \
    $$PWD/include/QLuaCompleter \
    $$PWD/include/QLuaHighlighter \
    $$PWD/include/QPythonCompleter \
    $$PWD/include/QPythonHighlighter \
    $$PWD/include/QStyleSyntaxHighlighter \
    $$PWD/include/QSyntaxStyle \
    $$PWD/include/QXMLHighlighter \
    $$PWD/include/internal/QCXXHighlighter.hpp \
    $$PWD/include/internal/QCodeEditor.hpp \
    $$PWD/include/internal/QGLSLCompleter.hpp \
    $$PWD/include/internal/QGLSLHighlighter.hpp \
    $$PWD/include/internal/QHighlightBlockRule.hpp \
    $$PWD/include/internal/QHighlightRule.hpp \
    $$PWD/include/internal/QJSHighlighter.hpp \
    $$PWD/include/internal/QJSONHighlighter.hpp \
    $$PWD/include/internal/QJavaHighlighter.hpp \
    $$PWD/include/internal/QLanguage.hpp \
    $$PWD/include/internal/QLineNumberArea.hpp \
    $$PWD/include/internal/QLuaCompleter.hpp \
    $$PWD/include/internal/QLuaHighlighter.hpp \
    $$PWD/include/internal/QPythonCompleter.hpp \
    $$PWD/include/internal/QPythonHighlighter.hpp \
    $$PWD/include/internal/QStyleSyntaxHighlighter.hpp \
    $$PWD/include/internal/QSyntaxStyle.hpp \
    $$PWD/include/internal/QXMLHighlighter.hpp \
    $$PWD/src/internal/QtCompat.hpp

RESOURCES += \
	$$PWD/resources/qcodeeditor_resources.qrc
