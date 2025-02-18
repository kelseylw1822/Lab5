#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <string>
using namespace std;

class Motorcycle
{
private:
    string manufactuer;
    string model;
    int year;
    int engineSize;
    string color;
    
public:
    Motorcycle() : manufactuer(""), model(""), year(0), engineSize(0), color("") {} ;
    Motorcycle(string theManufactuer, string theModel, int theYear, int theSize, string theColor) : manufactuer(theManufactuer), model(theModel), year(theYear), engineSize(theSize), color(theColor) {} ;
    void setManufactuer(string make);
    void setModel(string theModel);
    void setYear(int yearMade);
    void setEngineSize(int size);
    void setColor(string theColor);
    string getManufactuer();
    string getModel();
    int getYear();
    int getEngineSize();
    string getColor();
};


#endif

