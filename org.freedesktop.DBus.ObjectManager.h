/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -p org.freedesktop.DBus.ObjectManager -i dbus_types.h -N xml/org.freedesktop.DBus.ObjectManager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef ORG_FREEDESKTOP_DBUS_OBJECTMANAGER_H
#define ORG_FREEDESKTOP_DBUS_OBJECTMANAGER_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "dbus_types.h"

/*
 * Proxy class for interface org.freedesktop.DBus.ObjectManager
 */
class OrgFreedesktopDBusObjectManagerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.DBus.ObjectManager"; }

public:
    OrgFreedesktopDBusObjectManagerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopDBusObjectManagerInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<ObjectMap> GetManagedObjects()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetManagedObjects"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void InterfacesAdded(const QDBusObjectPath &object, InterfaceMap interfaces);
    void InterfacesRemoved(const QDBusObjectPath &object, const QStringList &interfaces);
};

#endif
