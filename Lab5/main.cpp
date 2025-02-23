#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

#include "Facility.h"
#include "Student.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Invoice.h"

using namespace std;

int main()
{
    ifstream inFile("inputTest1.txt"); // start input stream
    ofstream outFile("output.txt"); // start output stream
        
    vector<string> input;
    string line;

    while (getline(inFile, line))
    {
        input.push_back(line);
    }
    
    if (input[0] == "1")  // customer is a student
        {
            // Create the student object using input data
            Student student(input[1], input[2], input[3], input[4], input[5]);

            // Create a new Invoice for the student
            Invoice invoice;
            invoice.setPrice(75);
            invoice.setDiscount(25);  // Set the discount for students
            invoice.setServiceCharges(15);  // Set service charges

            if (input[6] == "1")  // vehicle is a car
            {
                // Create the car object using input data
                Car car(input[7], input[8], input[9], input[10], input[11]);

                // Show the invoice details for the student and car
                invoice.showInvoice(outFile);
                invoice.showInvoice(student, outFile);
                invoice.showInvoice(car, outFile);
            }
            else  // vehicle is a motorcycle
            {
                Motorcycle motorcycle(input[7], input[8], input[9], input[10], input[11]);

                // Show the invoice details for the student and motorcycle
                invoice.showInvoice(outFile);
                invoice.showInvoice(student, outFile);
                invoice.showInvoice(motorcycle, outFile);
            }
        }
        else  // customer is a facility
        {
            // Create the facility object using input data
            Facility facility(input[1], input[2], input[3], input[4], input[5]);

            // Create a new Invoice for the facility
            Invoice invoice;
            invoice.setPrice(75);  // Set the base price
            invoice.setServiceCharges(15);  // Set service charges

            if (input[6] == "1")  // vehicle is a car
            {
                Car car(input[7], input[8], input[9], input[10], input[11]);

                // Show the invoice details for the facility and car
                invoice.showInvoice(outFile);
                invoice.showInvoice(facility, outFile);
                invoice.showInvoice(car, outFile);
            }
            else  // vehicle is a motorcycle
            {
                Motorcycle motorcycle(input[7], input[8], input[9], input[10], input[11]);

                // Show the invoice details for the facility and motorcycle
                invoice.showInvoice(outFile);
                invoice.showInvoice(facility, outFile);
                invoice.showInvoice(motorcycle, outFile);
            }
        }
        
        inFile.close();
        outFile.close();
        
        return 0;
}
