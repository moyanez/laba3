//
// Created by u211-11 on 20.04.2017.
//
#include "temperature.h"


temperature convert (const temperature& from, char to)
{
    double k, converted;
    switch (from.scale)
    {
    case 'K':
        k = from.temp;
        break;
    case 'F':
        k = (from.temp + 459.67) / 1.8;
        break;
    case 'C':
        k = from.temp + 273.15;
        break;
    }
    switch (to)
    {
    case 'K': converted=k;
        break;
    case 'F': converted=(k*1.8)-459.67;
        break;
    case 'C': converted=k-273.15;
        break;
    }
    temperature result;

    result.scale=converted;

    return result;
}


std::istream &operator>>(std::istream& stream, temperature& temp)
{
    cout << "vvedite temperatury \n";
    stream >> temp.temp >> temp.scale;
    return stream;
}