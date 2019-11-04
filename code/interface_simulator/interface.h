#ifndef INTERFACE_H
#define INTERFACE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class interface; }
QT_END_NAMESPACE

class interface : public QMainWindow
{
    Q_OBJECT

public:
    interface(QWidget *parent = nullptr);
    ~interface();

private slots:
    void on_actionNovo_triggered();

    void on_actionAbrir_triggered();

    void on_actionSalvar_triggered();

    void on_actionPlay_triggered();

    void on_actionRecortar_triggered();

    void on_actionCopiar_triggered();

    void on_actionColar_triggered();

    void on_actionDesfazer_triggered();

    void on_actionRefazer_triggered();

private:
    Ui::interface *ui;
    QString place_file;
};
#endif // INTERFACE_H
