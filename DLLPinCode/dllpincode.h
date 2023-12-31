#ifndef DLLPINCODE_H
#define DLLPINCODE_H

#include "DLLPinCode_global.h"
#include "pinwindow.h"
#include <QString>
#include <QObject>
#include <QDebug>


class DLLPINCODE_EXPORT DLLPinCode : public QObject
{
    Q_OBJECT

public:
    DLLPinCode(QObject * parent = nullptr);
    ~DLLPinCode();
    void openPinWindow();
    void writeInfoText(QString);

signals:
    void pinNumberSignal(QString);

private slots:
    void receivePin(QString);

private:
    pinwindow *pinOlio;
};

#endif // DLLPINCODE_H
