#include "Motorcycle.h"

void Motorcycle::setManufacturer(string make)
{
    manufacturer = make;
}
void Motorcycle::setModel(string theModel)
{
    model = theModel;
}
void Motorcycle::setYear(string yearMade)
{
    year = yearMade;
}
void Motorcycle::setEngineSize(string size)
{
    engineSize = size;
}
void Motorcycle::setColor(string theColor)
{
    color = theColor;
}
string Motorcycle::getManufacturer()
{
    return manufacturer;
}
string Motorcycle::getModel()
{
    return model;
}
string Motorcycle::getYear()
{
    return year;
}
string Motorcycle::getEngineSize()
{
    return engineSize;
}
string Motorcycle::getColor()
{
    return color;
}



