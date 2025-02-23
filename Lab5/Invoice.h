#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Student.h"
#include "Facility.h"
#include "Car.h"
#include "Motorcycle.h"

using namespace std;

class Invoice
{
private:
    double price;
    double discount;
    double serviceCharge;
public:
    Invoice() : price(0), discount(0), serviceCharge(0) {} ;
    void setPrice(double amount);
    void setDiscount(double dis);
    void setServiceCharges(double charges);
    double getPrice();
    double getDiscount();
    double getServiceCharges();
    double totalCost();
    void showInvoice(ofstream& outFile);
    void showInvoice(Student& student, ofstream& outFile);
    void showInvoice(Facility& facility, ofstream& outFile);
    void showInvoice(Car& car, ofstream& outFile);
    void showInvoice(Motorcycle& motorcycle, ofstream& outFile);
};

#endif 
