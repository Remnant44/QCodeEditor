#ifndef QGLSLCOMPLETER_HPP
#define QGLSLCOMPLETER_HPP

#include "QCodeEditorCompleter.hpp"

/**
 * @brief Class, that describes completer with
 * glsl specific types and functions.
 */
class QGLSLCompleter : public QCodeEditorCompleter
{
    Q_OBJECT

  public:
    /**
     * @brief Constructor.
     * @param parent Pointer to parent QObject.
     */
    explicit QGLSLCompleter(QObject *parent = nullptr);
};

#endif
