#include "TrayIcon.h"

TrayIcon::TrayIcon(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon(":/Resources/logos.qrc/37420.png"));
    createTrayIcon();
}

TrayIcon::~TrayIcon()
{
}

void TrayIcon::createTrayIcon()
{
    trayIconMenu = new QMenu(this);

    //show
    shower = new QAction(tr("S&how"), this);
    QObject::connect(shower, &QAction::triggered, this, &QWidget::showNormal);
    trayIconMenu->addAction(shower);

    //hide
    hide = new QAction(tr("H&ide"), this);
    QObject::connect(hide, &QAction::triggered, this, &QWidget::hide);
    trayIconMenu->addAction(hide);

    //quit
    quit = new QAction(tr("Q&uit"), this);
    connect(quit, &QAction::triggered, qApp, &QCoreApplication::quit);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(quit);

    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setContextMenu(trayIconMenu);
    trayIcon->setIcon(QIcon(":/Resources/logos.qrc/37420.png"));
    trayIcon->setVisible(true);
}
