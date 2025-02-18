#include <iostream>
#include "Facility.h"
#include "Student.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Invoice.h"
using namespace std;

int main()
{
    int customer;
    int vehicle;
    
    // customer variables
    string name;
    string address;
    string email;
    string phone;
    int distance;
    
    // vehicle variables
    string manufactuer;
    string model;
    int year;
    int engineSize;
    string color;
    
    // invoice object
    Invoice invoice;
    
    // figure out what type of customer they are
    cout << "Enter 1 if you are a student or 2 if you are facility: " ;
    cin >> customer;
    cin.ignore();
    
    // get data about customer
    cout << "Enter your name: " ;
    getline(cin, name);
    cout << "Enter your address: " ;
    getline(cin, address);
    cout << "Enter your email: " ;
    getline(cin, email);
    cout << "Enter your phone number: ";
    getline(cin, phone);
    cout << "How many miles are you from campus: " ;
    cin >> distance;
    cin.ignore();
    
    Student* student = nullptr;
    Facility* facility = nullptr;
    
    if (customer == 1)
    {
        // declare student object
        student = new Student(name, address, email, phone, distance);
        invoice.setDiscount(25);
    }
    else
    {
        // declare facility object
        facility = new Facility(name, address, email, phone, distance);;
    }
    
    // figure out what type of vehicle they have
    cout << endl << "Enter 1 if you have a car or 2 if you have a motorcycle: " ;
    cin >> vehicle;
    cin.ignore();

    // get data about vehicle
    cout << "Enter your vehicles manufactuer: " ;
    getline(cin, manufactuer);
    cout << "Enter your vehicles model: " ;
    getline(cin, model);
    cout << "Enter the year your vehicle was made: " ;
    cin >> year;
    cout << "Enter your vehicles engine size: " ;
    cin >> engineSize;
    cin.ignore();
    cout << "Enter your vehicles color: ";
    getline(cin, color);
    cout << endl;
    
    Car* car = nullptr;
    Motorcycle* motorcycle = nullptr;
    
    if (vehicle == 1)
    {
        // declare car object
        car = new Car(manufactuer, model, year, engineSize, color);
        invoice.setServiceCharges(15);
        invoice.setPrice(75);
    }
    else
    {
        // declare motorcycle object
        motorcycle = new Motorcycle(manufactuer, model, year, engineSize, color);
        invoice.setServiceCharges(15);
        invoice.setPrice(50);
    }
    
    invoice.showInvoice();
    
    if (customer == 1)
        invoice.showInvoice(*student);
    else
        invoice.showInvoice(*facility);
    
    cout << endl;
    
    if(vehicle == 1)
        invoice.showInvoice(*car);
    else
        invoice.showInvoice(*motorcycle);
    
    delete student;
    delete facility;
    delete car;
    delete motorcycle;
    
    return 0;
}

