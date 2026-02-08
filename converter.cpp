#include "converter.h"
#include <map>

double Converter::convert(double value, QString fromUnit, QString toUnit, Type type) {
    if (fromUnit == toUnit) return value;
    switch (type) {
    case Length: return convertLength(value, fromUnit, toUnit);
    case Mass:   return convertMass(value, fromUnit, toUnit);
    case Temperature: return convertTemperature(value, fromUnit, toUnit);
    default: return 0;
    }
}

double Converter::convertLength(double value, QString from, QString to) {
    std::map<QString, double> factors = {
        {"meters (m)", 1.0}, {"kilometers (km)", 1000.0},
        {"inches (in)", 0.0254}, {"feet (ft)", 0.3048}, {"miles (mi)", 1609.34}
    };
    return (value * factors[from]) / factors[to];
}

double Converter::convertMass(double value, QString from, QString to) {
    std::map<QString, double> factors = {
        {"kilograms (kg)", 1.0}, {"pounds (lb)", 0.453592}, {"ounces (oz)", 0.0283495}
    };
    return (value * factors[from]) / factors[to];
}

double Converter::convertTemperature(double value, QString from, QString to) {
    double kelvin = 0;

    if (from == "Celsius (°C)") kelvin = value + 273.15;
    else if (from == "Fahrenheit (°F)") kelvin = (value - 32) * 5.0/9.0 + 273.15;
    else kelvin = value;

    if (to == "Celsius (°C)") return kelvin - 273.15;
    else if (to == "Fahrenheit (°F)") return (kelvin - 273.15) * 9.0/5.0 + 32;
    return kelvin;
}
