#ifndef PRODUCTSLIST_H
#define PRODUCTSLIST_H

# include <QWidget>
# include <QListWidget>

class ProdList : public QWidget
{

    Q_OBJECT

private:

    QStringList List;
    QString Name;

public:

    ProdList(QString);
    bool IsIn(QString text);
    void SetList(QStringList);
    void AddItem(QString name);

public slots:

    void AddItem();

signals:

};


#endif // PRODUCTSLIST_H
