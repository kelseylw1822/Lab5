// matthew

#include "Car.h"

void Car::setManufacturer(string make)
{
    manufacturer = make;
}
void Car::setModel(string theModel)
{
    model = theModel;
}
void Car::setYear(string yearMade)
{
    year = yearMade;
}
void Car::setEngineSize(string size)
{
    engineSize = size;
}
void Car::setColor(string theColor)
{
    color = theColor;
}
string Car::getManufacturer()
{
    return manufacturer;
}
string Car::getModel()
{
    return model;
}
string Car::getYear()
{
    return year;
}
string Car::getEngineSize()
{
    return engineSize;
}
string Car::getColor()
{
    return color;
}

