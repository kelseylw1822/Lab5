// kelsey

#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <string>
using namespace std;

class Motorcycle
{
private:
    string manufacturer;
    string model;
    string year;
    string engineSize;
    string color;
    
public:
    Motorcycle() : manufacturer(""), model(""), year(""), engineSize(""), color("") {} ;
    Motorcycle(string theManufactuer, string theModel, string theYear, string theSize, string theColor) : manufacturer(theManufactuer), model(theModel), year(theYear), engineSize(theSize), color(theColor) {} ;
    void setManufacturer(string make);
    void setModel(string theModel);
    void setYear(string yearMade);
    void setEngineSize(string size);
    void setColor(string theColor);
    string getManufacturer();
    string getModel();
    string getYear();
    string getEngineSize();
    string getColor();
};


#endif

