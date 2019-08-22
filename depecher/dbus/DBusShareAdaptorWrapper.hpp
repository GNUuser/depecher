/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a file.hpp:file.cpp -c DBusShareAdaptorWrapper C:\Users\cheiv\Documents\Projects\SailfishOS\fromBigTower\depecher\depecher\dbus\org.blacksailer.depecher.share.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef FILE_HPP_H
#define FILE_HPP_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.blacksailer.depecher.share
 */
class DBusShareAdaptorWrapper: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.blacksailer.depecher.share")
    Q_CLASSINFO("D-Bus Introspection", ""
                "  <interface name=\"org.blacksailer.depecher.share\">\n"
                "    <method name=\"sendMedia\">\n"
                "      <arg direction=\"in\" type=\"ax\" name=\"chat_ids\"/>\n"
                "      <annotation value=\"QList&lt;qlonglong&gt;\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
                "      <arg direction=\"in\" type=\"s\" name=\"filepath\"/>\n"
                "      <arg direction=\"in\" type=\"s\" name=\"mimeType\"/>\n"
                "      <annotation value=\"true\" name=\"org.freedesktop.DBus.Method.NoReply\"/>\n"
                "    </method>\n"
                "    <signal name=\"uploadFailed\">\n"
                "      <arg direction=\"out\" type=\"s\" name=\"chat_id\"/>\n"
                "      <arg direction=\"out\" type=\"s\" name=\"message_id\"/>\n"
                "    </signal>\n"
                "    <signal name=\"uploadFinished\">\n"
                "      <arg direction=\"out\" type=\"s\" name=\"chat_id\"/>\n"
                "      <arg direction=\"out\" type=\"s\" name=\"message_id\"/>\n"
                "      <arg direction=\"out\" type=\"s\" name=\"remote_url\"/>\n"
                "    </signal>\n"
                "    <signal name=\"uploadStarted\">\n"
                "      <arg direction=\"out\" type=\"s\" name=\"chat_id\"/>\n"
                "      <arg direction=\"out\" type=\"s\" name=\"message_id\"/>\n"
                "      <arg direction=\"out\" type=\"s\" name=\"local_url\"/>\n"
                "    </signal>\n"
                "    <signal name=\"uploadProgress\">\n"
                "      <arg direction=\"out\" type=\"s\" name=\"chat_id\"/>\n"
                "      <arg direction=\"out\" type=\"s\" name=\"message_id\"/>\n"
                "      <arg direction=\"out\" type=\"i\" name=\"percent\"/>\n"
                "    </signal>\n"
                "  </interface>\n"
                "")
    bool m_policyInitialized = false;
public:
    DBusShareAdaptorWrapper(QObject *parent);
    virtual ~DBusShareAdaptorWrapper();
    void initPolicy();
public Q_SLOTS: // METHODS
    Q_NOREPLY void sendMedia(const QList<qlonglong> &chat_ids, const QString &filepath, const QString &mimeType, const QDBusMessage &message);
Q_SIGNALS: // SIGNALS
    void uploadFailed(const QString &chat_id, const QString &message_id);
    void uploadFinished(const QString &chat_id, const QString &message_id, const QString &remote_url);
    void uploadProgress(const QString &chat_id, const QString &message_id, int percent);
    void uploadStarted(const QString &chat_id, const QString &message_id, const QString &local_url);
};

#endif
