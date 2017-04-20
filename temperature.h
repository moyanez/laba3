//
// Created by u211-11 on 20.04.2017.
//

#ifndef UNTITLED_TEMPERATURE_H
#define UNTITLED_TEMPERATURE_H
#include <sstream>
temperature convert (const temperature& from, char to);
struct temperature
{
    double temp;
    char scale;
};
std::istream &operator>>(std::istream& stream, temperature& temp)
char Scale[] = "KFC";
 #endif //UNTITLED_TEMPERATURE_H
