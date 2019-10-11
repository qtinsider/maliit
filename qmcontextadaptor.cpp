/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -v -c QMaliitInputcontext1Adaptor -i qmcontextadaptor.h -a :qmcontextadaptor.cpp interfaces/minputmethodcontext1interface.xml
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "qmcontextadaptor.h"

#include "qmaliitplatforminputcontext.h"

#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class QMaliitInputcontext1Adaptor
 */

QMaliitInputcontext1Adaptor::QMaliitInputcontext1Adaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

QMaliitInputcontext1Adaptor::~QMaliitInputcontext1Adaptor()
{
    // destructor
}

void QMaliitInputcontext1Adaptor::activationLostEvent()
{
    // handle method call com.meego.inputmethod.inputcontext1.activationLostEvent
    QMetaObject::invokeMethod(parent(), "activationLostEvent");
}

void QMaliitInputcontext1Adaptor::commitString(const QString &in0, int in1, int in2, int in3)
{
    // handle method call com.meego.inputmethod.inputcontext1.commitString
    QMetaObject::invokeMethod(parent(), "commitString", Q_ARG(QString, in0), Q_ARG(int, in1), Q_ARG(int, in2), Q_ARG(int, in3));
}

void QMaliitInputcontext1Adaptor::imInitiatedHide()
{
    // handle method call com.meego.inputmethod.inputcontext1.imInitiatedHide
    QMetaObject::invokeMethod(parent(), "imInitiatedHide");
}

void QMaliitInputcontext1Adaptor::keyEvent(int in0, int in1, int in2, const QString &in3, bool in4, int in5, uchar in6)
{
    // handle method call com.meego.inputmethod.inputcontext1.keyEvent
    QMetaObject::invokeMethod(parent(), "keyEvent", Q_ARG(int, in0), Q_ARG(int, in1), Q_ARG(int, in2), Q_ARG(QString, in3), Q_ARG(bool, in4), Q_ARG(int, in5), Q_ARG(uchar, in6));
}

void QMaliitInputcontext1Adaptor::notifyExtendedAttributeChanged(int in0, const QString &in1, const QString &in2, const QString &in3, const QDBusVariant &in4)
{
    // handle method call com.meego.inputmethod.inputcontext1.notifyExtendedAttributeChanged
    QMetaObject::invokeMethod(parent(), "notifyExtendedAttributeChanged", Q_ARG(int, in0), Q_ARG(QString, in1), Q_ARG(QString, in2), Q_ARG(QString, in3), Q_ARG(QDBusVariant, in4));
}

bool QMaliitInputcontext1Adaptor::preeditRectangle(int &out1, int &out2, int &out3, int &out4)
{
    // handle method call com.meego.inputmethod.inputcontext1.preeditRectangle
    return static_cast<QMaliitPlatformInputContext *>(parent())->preeditRectangle(out1, out2, out3, out4);
}

bool QMaliitInputcontext1Adaptor::selection(QString &out1)
{
    // handle method call com.meego.inputmethod.inputcontext1.selection
    return static_cast<QMaliitPlatformInputContext *>(parent())->selection(out1);
}

void QMaliitInputcontext1Adaptor::setDetectableAutoRepeat(bool in0)
{
    // handle method call com.meego.inputmethod.inputcontext1.setDetectableAutoRepeat
    QMetaObject::invokeMethod(parent(), "setDetectableAutoRepeat", Q_ARG(bool, in0));
}

void QMaliitInputcontext1Adaptor::setGlobalCorrectionEnabled(bool in0)
{
    // handle method call com.meego.inputmethod.inputcontext1.setGlobalCorrectionEnabled
    QMetaObject::invokeMethod(parent(), "setGlobalCorrectionEnabled", Q_ARG(bool, in0));
}

void QMaliitInputcontext1Adaptor::setLanguage(const QString &in0)
{
    // handle method call com.meego.inputmethod.inputcontext1.setLanguage
    QMetaObject::invokeMethod(parent(), "setLanguage", Q_ARG(QString, in0));
}

void QMaliitInputcontext1Adaptor::setRedirectKeys(bool in0)
{
    // handle method call com.meego.inputmethod.inputcontext1.setRedirectKeys
    QMetaObject::invokeMethod(parent(), "setRedirectKeys", Q_ARG(bool, in0));
}

void QMaliitInputcontext1Adaptor::setSelection(int in0, int in1)
{
    // handle method call com.meego.inputmethod.inputcontext1.setSelection
    QMetaObject::invokeMethod(parent(), "setSelection", Q_ARG(int, in0), Q_ARG(int, in1));
}

void QMaliitInputcontext1Adaptor::updateInputMethodArea(int in0, int in1, int in2, int in3)
{
    // handle method call com.meego.inputmethod.inputcontext1.updateInputMethodArea
    QMetaObject::invokeMethod(parent(), "updateInputMethodArea", Q_ARG(int, in0), Q_ARG(int, in1), Q_ARG(int, in2), Q_ARG(int, in3));
}

void QMaliitInputcontext1Adaptor::updatePreedit(const QDBusMessage &message)
{
    // handle method call com.meego.inputmethod.inputcontext1.updatePreedit
    QMetaObject::invokeMethod(parent(), "updatePreedit", Q_ARG(QDBusMessage, message));
}

