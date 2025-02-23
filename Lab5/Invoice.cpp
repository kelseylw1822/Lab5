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
void Invoice::showInvoice(ofstream& outFile) {
    outFile << "BILL" << endl;
    outFile << "Permit Type: Annual" << endl;
    outFile << "Permit Cost: $" << fixed << setprecision(2) << price << endl;
    outFile << "Discounts: $" << fixed << setprecision(2) << discount << endl;
    outFile << "Service Charge: $" << fixed << setprecision(2) << serviceCharge << endl;
    outFile << "Total: $" << fixed << setprecision(2) << getPrice() << endl ;
}

// Show the invoice for a student
void Invoice::showInvoice(Student& student, ofstream& outFile) {
    outFile << "CUSTOMER" << endl << "Student" << endl;
    outFile << "Full Name: " << student.getName() << endl;
    outFile << "Address: " << student.getAddress() << endl;
    outFile << "Email: " << student.getEmail() << endl;
    outFile << "Phone Number: " << student.getPhone() << endl;
    outFile << "Age: " << student.getAge() << endl;
}

// Show the invoice for a facility
void Invoice::showInvoice(Facility& facility, ofstream& outFile) {
    outFile << "CUSTOMER" << endl << "Facility" << endl;
    outFile << "Full Name: " << facility.getName() << endl;
    outFile << "Address: " << facility.getAddress() << endl;
    outFile << "Email: " << facility.getEmail() << endl;
    outFile << "Phone Number: " << facility.getPhone() << endl;
    outFile << "Distance from Campus: " << facility.getMilesFromCampus() << " Miles" << endl;
}

// Show the invoice for a car
void Invoice::showInvoice(Car& car, ofstream& outFile) {
    outFile << "VEHICLE" << endl << "Car" << endl;
    outFile << "Manufacturer: " << car.getManufacturer() << endl;
    outFile << "Model Number: " << car.getModel() << endl;
    outFile << "Model Year: " << car.getYear() << endl;
    outFile << "Engine Size: " << car.getEngineSize() << endl;
    outFile << "Vehicle Color: " << car.getColor() << endl;
}

// Show the invoice for a motorcycle
void Invoice::showInvoice(Motorcycle& motorcycle, ofstream& outFile) {
    outFile << "VEHICLE" << endl << "Motorcyle" << endl;
    outFile << "Manufacturer: " << motorcycle.getManufacturer() << endl;
    outFile << "Model Number: " << motorcycle.getModel() << endl;
    outFile << "Model Year: " << motorcycle.getYear() << endl;
    outFile << "Engine Size: " << motorcycle.getEngineSize() << endl;
    outFile << "Vehicle Color: " << motorcycle.getColor() << endl;
}
