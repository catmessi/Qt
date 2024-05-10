#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStack>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QString expression;
private slots:
    void on_onebutton_clicked();

    void on_twobutton_clicked();

    void on_threebutton_clicked();

    void on_fourbutton_clicked();

    void on_fivebutton_clicked();

    void on_sixbutton_clicked();

    void on_sevenbutton_clicked();

    void on_eightbutton_clicked();

    void on_ninebutton_clicked();

    void on_zerobutton_clicked();

    void on_leftbutton_clicked();

    void on_rightbutton_clicked();

    void on_addbutton_clicked();

    void on_subtractbutton_clicked();

    void on_multbutton_clicked();

    void on_dividebutton_clicked();

    void on_equalbutton_clicked();

    void on_cleanbutton_clicked();

    void on_delbutton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
