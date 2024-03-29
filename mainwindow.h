#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qfile.h>
#include <qfiledialog.h>
#include <qtextstream.h>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui {
class Wpad;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

private:
    Ui::Wpad *ui;
    QString currentFile = "";
};
#endif // MAINWINDOW_H
