#ifndef POLLENFLUG_H
#define POLLENFLUG_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkConfigurationManager>
#include <QSettings>
#include <QVariant>

#include "germanpollenbackend.h"
#include "frenchpollenbackend.h"

class Pollenflug : public QObject {
    Q_OBJECT
public:
    explicit Pollenflug(QObject *parent = nullptr);
    ~Pollenflug();
    GermanPollenBackend *getGermanPollenBackend();
    FrenchPollenBackend *getFrenchPollenBackend();

signals:

public slots:

private:
    QNetworkAccessManager * const networkAccessManager;
    QNetworkConfigurationManager * const networkConfigurationManager;

    // pollen backends
    GermanPollenBackend *germanPollenBackend;
    FrenchPollenBackend *frenchPollenBackend;

    QSettings settings;

};

#endif // POLLENFLUG_H
