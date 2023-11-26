#ifndef QPYTHONCOMPLETER_HPP
#define QPYTHONCOMPLETER_HPP

#include "QCodeEditorCompleter.hpp"

/**
 * @brief Class, that describes completer with
 * python specific types and functions.
 */
class QPythonCompleter : public QCodeEditorCompleter
{
    Q_OBJECT

  public:
    /**
     * @brief Constructor.
     * @param parent Pointer to parent QObject.
     */
    explicit QPythonCompleter(QObject *parent = nullptr);
};

#endif
