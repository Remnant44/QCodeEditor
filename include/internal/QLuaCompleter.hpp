#ifndef QLUACOMPLETER_HPP
#define QLUACOMPLETER_HPP

#include "QCodeEditorCompleter.hpp"

/**
 * @brief Class, that describes completer with
 * lua specific types and functions.
 */
class QLuaCompleter : public QCodeEditorCompleter
{
    Q_OBJECT

  public:
    /**
     * @brief Constructor.
     * @param parent Pointer to parent QObject.
     */
    explicit QLuaCompleter(QObject *parent = nullptr);
};

#endif
