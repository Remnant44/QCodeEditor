#ifndef QCODEEDITORCOMPLETER_HPP
#define QCODEEDITORCOMPLETER_HPP

// Qt
#include <QCompleter> // Rrequired for inheritance
#include <QTextCursor>
#include <QPair>
#include <QChar>

/**
 * @brief Class, that describes completer with
 * QCodeEditor specific types and functions.
 */

class QCodeEditorCompleter : public QCompleter
{
	Q_OBJECT
	
public:
	/**
     * @brief Constructor.
     * @param parent Pointer to parent QObject.
     */
    explicit QCodeEditorCompleter(QObject *parent = nullptr);
	
	/**
     * @brief Method for getting prefix under
     * cursor.
     * @param cursor Cursor to start the retrieval from
     * @return Cursor with the entire prefix selected.
     */
	virtual QTextCursor getCompleterPrefix(QTextCursor cursor);
	
	/**
     * @brief Method for getting wheter a character
     * is part of the prefix or not.
     * @param c Character to be tested
     * @return True if the character is a non-prefix
     * character, false otherwise.
     */
	virtual bool isStopCharacter(QChar c);
};

#endif // QCODEEDITORCOMPLETER_HPP
