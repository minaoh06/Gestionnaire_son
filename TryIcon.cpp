#include "TryIcon.h"

TrayIcon::TrayIcon(QWidget *parent) : QWidget(parent)
{

}

TrayIcon::~TrayIcon()
{
}

int createTrayIcon()
{
    trayIconMenu = new QMenu(this);

    trayIcon = new QSystemTrayIcon(this);
}
