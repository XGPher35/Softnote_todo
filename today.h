#ifndef TODAY_H
#define TODAY_H

#include <QDialog>

namespace Ui {
class today;
}

class today : public QDialog
{
    Q_OBJECT

public:
    explicit today(QWidget *parent = nullptr);
    ~today();

private:
    Ui::today *ui;
};

#endif // TODAY_H
