#include "Motorcycle.h"

void Motorcycle::setManufactuer(string make)
{
    manufactuer = make;
}
void Motorcycle::setModel(string theModel)
{
    model = theModel;
}
void Motorcycle::setYear(int yearMade)
{
    year = yearMade;
}
void Motorcycle::setEngineSize(int size)
{
    engineSize = size;
}
void Motorcycle::setColor(string theColor)
{
    color = theColor;
}
string Motorcycle::getManufactuer()
{
    return manufactuer;
}
string Motorcycle::getModel()
{
    return model;
}
int Motorcycle::getYear()
{
    return year;
}
int Motorcycle::getEngineSize()
{
    return engineSize;
}
string Motorcycle::getColor()
{
    return color;
}



