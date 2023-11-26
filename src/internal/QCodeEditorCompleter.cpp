#include <QCodeEditorCompleter>

QCodeEditorCompleter::QCodeEditorCompleter(QObject *parent)
	: QCompleter(parent)
{}

QTextCursor QCodeEditorCompleter::getCompleterPrefix(QTextCursor cursor)
{
	static QString eow(R"(~!@#$%^&*()_+{}|:"<>?,./;'[]\-= )""\t\r\n");
	
	int finalPosition = cursor.position();
	bool firstIteration = true;
	bool firstString = true;
	bool dotAllowed = true;
	
	do {
		
		cursor.movePosition(QTextCursor::StartOfWord, QTextCursor::MoveAnchor);
		if(!cursor.movePosition(QTextCursor::EndOfWord, QTextCursor::KeepAnchor))
			cursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, 1);
		
		if(firstString && finalPosition > cursor.position())
			cursor.setPosition(finalPosition, QTextCursor::KeepAnchor);
		else if(cursor.position() > finalPosition)
			finalPosition = cursor.position();
		
		QString currentString = cursor.selectedText();
		if(currentString.isEmpty() && firstIteration) {
			cursor.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, 2);
			// Redo the loop
			firstIteration = false;
			continue;
		}
		
		if(currentString.isEmpty())
			break;
		firstString = false;
		
		bool stop = false;
		for(int i = 0; i < currentString.size(); ++i) {
			if(eow.contains(currentString.at(i))) {
				if(currentString.at(i) == '.' && dotAllowed) {
					dotAllowed = false;
					continue;
				}
				stop = true;
				break;
			}
		}
		if(stop) {
			cursor.movePosition(QTextCursor::EndOfWord);
			break;
		}
		dotAllowed = false;
		
		cursor.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, 1);
		cursor.movePosition(QTextCursor::StartOfWord, QTextCursor::MoveAnchor);
		if(!cursor.movePosition(QTextCursor::PreviousCharacter, QTextCursor::MoveAnchor))
			break;
		cursor.movePosition(QTextCursor::NextCharacter, QTextCursor::KeepAnchor);
		
		if(cursor.selectedText() != ".")
			break;
		if(!cursor.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, 2))
			break;
		
		firstIteration = false;
	} while(true);
	
	cursor.setPosition(cursor.position(), QTextCursor::MoveAnchor);
	cursor.setPosition(finalPosition, QTextCursor::KeepAnchor);
	
	qDebug() << cursor.selectedText();
	return cursor;
}

bool QCodeEditorCompleter::isStopCharacter(QChar c)
{
	static QString eowDotless(R"(~!@#$%^&*()_+{}|:"<>?,/;'[]\-=)");
	return eowDotless.contains(c);
}
