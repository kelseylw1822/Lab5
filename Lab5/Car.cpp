#include "Car.h"

void Car::setManufactuer(string make)
{
    manufactuer = make;
}
void Car::setModel(string theModel)
{
    model = theModel;
}
void Car::setYear(int yearMade)
{
    year = yearMade;
}
void Car::setEngineSize(int size)
{
    engineSize = size;
}
void Car::setColor(string theColor)
{
    color = theColor;
}
string Car::getManufactuer()
{
    return manufactuer;
}
string Car::getModel()
{
    return model;
}
int Car::getYear()
{
    return year;
}
int Car::getEngineSize()
{
    return engineSize;
}
string Car::getColor()
{
    return color;
}

