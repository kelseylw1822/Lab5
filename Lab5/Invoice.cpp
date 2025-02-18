#include "Invoice.h"

void Invoice::setPrice(double amount)
{
    price = amount;
}
void Invoice::setDiscount(double dis)
{
    discount = dis;
}
void Invoice::setServiceCharges(double charges)
{
    serviceCharge = charges;
}
double Invoice::getPrice()
{
    return price - discount + serviceCharge;
}
double Invoice::getDiscount()
{
    return discount;
}
double Invoice::getServiceCharges()
{
    return serviceCharge;
}

double Invoice::totalCost()
{
    return  price - discount + serviceCharge;
}

void Invoice::showInvoice()
{
    cout << "BILL" << endl;
    cout << "Permit Type: Annual" << endl;
    cout << "Permit Cost: $" << fixed << setprecision(2) << price << endl;
    cout << "Discounts: $" << fixed << setprecision(2) << discount << endl;
    cout << "Service Charge: $" << fixed << setprecision(2) << serviceCharge << endl;
    cout << "Total: $" << fixed << setprecision(2) << getPrice() << endl ;
}

void Invoice::showInvoice(Student& student)
{
    cout << "CUSTOMER" << endl << "Student" << endl;
    cout << "Full Name: " << student.getName() << endl;
    cout << "Adress: " << student.getAddress() << endl;
    cout << "Email: " << student.getEmail() << endl;
    cout << "Phone Number: " << student.getPhone() << endl;
    cout << "Distance from Campus: " << student.getMilesFromCampus() << " Miles" << endl;
}
void Invoice::showInvoice(Facility& facility)
{
    cout << "CUSTOMER" << endl << "Facility" << endl;
    cout << "Full Name: " << facility.getName() << endl;
    cout << "Adress: " << facility.getAddress() << endl;
    cout << "Email: " << facility.getEmail() << endl;
    cout << "Phone Number: " << facility.getPhone() << endl;
    cout << "Distance from Campus: " << facility.getMilesFromCampus() << " Miles" << endl;
}
void Invoice::showInvoice(Car& car)
{
    cout << "VEHICLE" << endl << "Car" << endl;
    cout << "Manufacturer: " << car.getManufactuer() << endl;
    cout << "Modedl Number: " << car.getModel() << endl;
    cout << "Model Year: " << car.getYear() << endl;
    cout << "Engine Size: " << car.getEngineSize() << endl;
    cout << "Vehicle Color: " << car.getColor() << endl;
}
void Invoice::showInvoice(Motorcycle& motorcyles)
{
    cout << "VEHICLE" << endl << "Motorcyle" << endl;
    cout << "Manufacturer: " << motorcyles.getManufactuer() << endl;
    cout << "Modedl Number: " << motorcyles.getModel() << endl;
    cout << "Model Year: " << motorcyles.getYear() << endl;
    cout << "Engine Size: " << motorcyles.getEngineSize() << endl;
    cout << "Vehicle Color: " << motorcyles.getColor() << endl;
}

