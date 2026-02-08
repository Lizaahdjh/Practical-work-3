#ifndef CONVERTER_H
#define CONVERTER_H

#include <QString>

class Converter {
public:
    static double convertLength(double value, QString from, QString to);
    static double convertMass(double value, QString from, QString to);
    static double convertTemperature(double value, QString from, QString to);

    enum Type { Length, Mass, Temperature };
    static double convert(double value, QString from, QString to, Type type);
};

#endif
