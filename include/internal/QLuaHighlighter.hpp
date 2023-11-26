#ifndef QLUAHIGHLIGHTER_HPP
#define QLUAHIGHLIGHTER_HPP

// QCodeEditor
#include <QHighlightBlockRule>
#include <QHighlightRule>
#include <QStyleSyntaxHighlighter> // Required for inheritance

// Qt
#include <QMap>
#include <QRegularExpression>
#include <QVector>

class QSyntaxStyle;

/**
 * @brief Class, that describes C++ code
 * highlighter.
 */
class QLuaHighlighter : public QStyleSyntaxHighlighter
{
    Q_OBJECT
  public:
    /**
     * @brief Constructor.
     * @param document Pointer to document.
     */
    explicit QLuaHighlighter(QTextDocument *document = nullptr);
	
	/**
     * @brief Method for getting a sequence that marks a start of a multi line comment block.
     * @param contents the contents of the comment block that will be created.
     * @return QString containing the most appropriate sequence that marks a multi line comment block.
     * @details Returned value can be empty meaning that this language doesn't
     * support multi line comments
     */
    virtual QString startToggleCommentBlockSequence(const QString &contents) const override;

    /**
     * @brief Method for getting a sequence that marks a end of a multi line comment block.
     * @param start the start of the comment block that will be created.
     * @return QString containing the most appropriate sequence that marks an end multi line comment block.
     * @details Returned value can be empty meaning that this language doesn't
     * support multi line comments.
     */
    virtual QString endToggleCommentBlockSequence(const QString &start) const override;

  protected:
    void highlightBlock(const QString &text) override;

  private:
    QVector<QHighlightRule> m_highlightRules;
    QVector<QHighlightBlockRule> m_highlightBlockRules;

    QRegularExpression m_requirePattern;
    QRegularExpression m_functionPattern;
    QRegularExpression m_defTypePattern;
};

#endif
