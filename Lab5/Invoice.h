#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include <iomanip>
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
    void showInvoice();
    void showInvoice(Student& student);
    void showInvoice(Facility& facility);
    void showInvoice(Car& car);
    void showInvoice(Motorcycle& motorcyles);
};

#endif 
