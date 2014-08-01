#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <string>
#include <cstdlib>
#include <QMainWindow>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ileri_clicked();

    void on_git_clicked();

    void on_lineEdit_returnPressed();

    void on_webView_urlChanged(const QUrl &arg1);

    void on_geri_clicked();

    void on_yenile_clicked();

    void on_durdur_clicked();

    void on_ara_clicked();

    void on_lineEdit_2_returnPressed();

    void on_webView_loadStarted();

    void on_webView_loadFinished(bool arg1);


    void on_ev_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
