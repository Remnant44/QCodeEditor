// QCodeEditor
#include <QLanguage>
#include <QLuaCompleter>

// Qt
#include <QFile>
#include <QStringListModel>

QLuaCompleter::QLuaCompleter(QObject *parent) : QCodeEditorCompleter(parent)
{
    // Setting up Lua types
    QStringList list;

    Q_INIT_RESOURCE(qcodeeditor_resources);
    QFile fl(":/languages/lua.xml");

    if (!fl.open(QIODevice::ReadOnly))
    {
        return;
    }

    QLanguage language(&fl);

    if (!language.isLoaded())
    {
        return;
    }

    auto keys = language.keys();
    for (auto &&key : keys)
    {
		if(key.toLower() != "types") {
			auto names = language.names(key);
			list.append(names);
		}
    }
	
	list.removeDuplicates();

    setModel(new QStringListModel(list, this));
    setCompletionColumn(0);
    setModelSorting(QCompleter::CaseInsensitivelySortedModel);
    setCaseSensitivity(Qt::CaseSensitive);
    setWrapAround(true);
}
