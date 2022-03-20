#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QCoreApplication>

class TrayIcon : public QWidget
{
    Q_OBJECT

public:
    TrayIcon(QWidget *parent = nullptr);
    ~TrayIcon();

private:
    void createTrayIcon();

    QAction *hide;
    QAction *shower;
    QAction *quit;

    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;
};
#endif // WIDGET_H
