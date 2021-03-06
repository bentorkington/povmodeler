/*
 * This file was generated by dbusidl2cpp version 0.4
 * when processing input file org.kde.povmodeler.xml
 *
 * dbusidl2cpp is Copyright (C) 2006 Trolltech AS. All rights reserved.
 *
 * This is an auto-generated file.
 */

#ifndef POVMODELERADAPTATOR_H_234111149511453
#define POVMODELERADAPTATOR_H_234111149511453

#include <QtCore/QObject>
#include <QtCore/QMetaObject>
#include <QtCore/QVariant>
#include <QtDBus>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Adaptor class for interface org.povmodeler
 */
class povmodelerAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.povmodeler")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.povmodeler\" >\n"
"    <method name=\"deleteContents\" />\n"
"    <method name=\"closeDocument\" />\n"
"    <method name=\"newDocument\" />\n"
"    <method name=\"initDocument\" />\n"
"    <method name=\"clearSelection\" />\n"
"    <method name=\"slotEditCut\" />\n"
"    <method name=\"slotEditDelete\" />\n"
"    <method name=\"slotEditCopy\" />\n"
"    <method name=\"slotEditPaste\" />\n"
"    <method name=\"slotRender\" />\n"
"    <method name=\"slotNewObject\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"type\" />\n"
"      <arg direction=\"in\" type=\"s\" name=\"pos\" />\n"
"    </method>\n"
"    <method name=\"activeObjectName\" >\n"
"      <arg direction=\"out\" type=\"s\" />\n"
"    </method>\n"
"    <method name=\"setActiveObject\" >\n"
"      <arg direction=\"out\" type=\"b\" />\n"
"      <arg direction=\"in\" type=\"s\" name=\"name\" />\n"
"    </method>\n"
"    <method name=\"getProperties\" >\n"
"      <arg direction=\"out\" type=\"as\" />\n"
"    </method>\n"
"    <method name=\"setProperty\" >\n"
"      <arg direction=\"out\" type=\"b\" />\n"
"      <arg direction=\"in\" type=\"s\" name=\"property\" />\n"
"      <arg direction=\"in\" type=\"s\" name=\"value\" />\n"
"    </method>\n"
"    <method name=\"getObjectTypes\" >\n"
"      <arg direction=\"out\" type=\"as\" />\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    povmodelerAdaptor(QObject *parent);
    virtual ~povmodelerAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    QString activeObjectName();
    void clearSelection();
    void closeDocument();
    void deleteContents();
    QStringList getObjectTypes();
    QStringList getProperties();
    void initDocument();
    void newDocument();
    bool setActiveObject(const QString &name);
    bool setProperty(const QString &property, const QString &value);
    void slotEditCopy();
    void slotEditCut();
    void slotEditDelete();
    void slotEditPaste();
    void slotNewObject(const QString &type, const QString &pos);
    void slotRender();
Q_SIGNALS: // SIGNALS
};

#endif

