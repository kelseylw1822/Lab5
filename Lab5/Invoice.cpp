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

// Show the invoice (general format for invoice)
void Invoice::showInvoice() {
    cout << "BILL" << endl;
    cout << "Permit Type: Annual" << endl;
    cout << "Permit Cost: $" << fixed << setprecision(2) << price << endl;
    cout << "Discounts: $" << fixed << setprecision(2) << discount << endl;
    cout << "Service Charge: $" << fixed << setprecision(2) << serviceCharge << endl;
    cout << "Total: $" << fixed << setprecision(2) << getPrice() << endl ;
}

// Show the invoice for a student
void Invoice::showInvoice(Student& student) {
    cout << "CUSTOMER" << endl << "Student" << endl;
    cout << "Full Name: " << student.getName() << endl;
    cout << "Address: " << student.getAddress() << endl;
    cout << "Email: " << student.getEmail() << endl;
    cout << "Phone Number: " << student.getPhone() << endl;
    cout << "Age: " << student.getAge() << " Years Old" << endl;
}

// Show the invoice for a facility
void Invoice::showInvoice(Facility& facility) {
    cout << "CUSTOMER" << endl << "Facility" << endl;
    cout << "Full Name: " << facility.getName() << endl;
    cout << "Address: " << facility.getAddress() << endl;
    cout << "Email: " << facility.getEmail() << endl;
    cout << "Phone Number: " << facility.getPhone() << endl;
    cout << "Distance from Campus: " << facility.getMilesFromCampus() << " Miles" << endl;
}

// Show the invoice for a car
void Invoice::showInvoice(Car& car) {
    cout << "VEHICLE" << endl << "Car" << endl;
    cout << "Manufacturer: " << car.getManufacturer() << endl;
    cout << "Model Number: " << car.getModel() << endl;
    cout << "Model Year: " << car.getYear() << endl;
    cout << "Engine Size: " << car.getEngineSize() << endl;
    cout << "Vehicle Color: " << car.getColor() << endl;
}

// Show the invoice for a motorcycle
void Invoice::showInvoice(Motorcycle& motorcycle) {
    cout << "VEHICLE" << endl << "Motorcyle" << endl;
    cout << "Manufacturer: " << motorcycle.getManufacturer() << endl;
    cout << "Model Number: " << motorcycle.getModel() << endl;
    cout << "Model Year: " << motorcycle.getYear() << endl;
    cout << "Engine Size: " << motorcycle.getEngineSize() << endl;
    cout << "Vehicle Color: " << motorcycle.getColor() << endl;
}
