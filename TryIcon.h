#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSystemTrayIcon>
#include <QMenu>

class TrayIcon : public QWidget
{
    Q_OBJECT

public:
    TrayIcon(QWidget *parent = nullptr);
    ~TrayIcon();

private:
    int createTrayIcon();

    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;
};
#endif // WIDGET_H
