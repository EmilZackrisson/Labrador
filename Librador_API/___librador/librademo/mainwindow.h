#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QCPGraph;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    void initialisePlot();
    double ymin = -20, ymax = 20;
    int current_channel = 1;
    void signal_gen_convenience(int channel);
    void plot_from_librador(std::vector<double> *from_librador, double sampleRate, QCPGraph *graph);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_comboBox_activated(int index);

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_comboBox_2_activated(int index);

    void on_comboBox_3_activated(int index);

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
