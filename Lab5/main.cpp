// Name: Kelsey Wessel and Matthew Garino
// My Class: CPSC 1021
// Date: 02/23/2025
// Desc: ractice object-oriented analysis and design and to write an object-based program. 

#include <iostream>
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
    vector<string> input;
    string line;

    while (getline(cin, line))
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

            if (input[6] == "1")  // vehicle is a car
            {
                // Create the car object using input data
                Car car(input[7], input[8], input[9], input[10], input[11]);
                invoice.setServiceCharges(15);  // Set service charges

                // Show the invoice details for the student and car
                invoice.showInvoice();
                invoice.showInvoice(student);
                invoice.showInvoice(car);
            }
            else  // vehicle is a motorcycle
            {
                Motorcycle motorcycle(input[7], input[8], input[9], input[10], input[11]);

                // Show the invoice details for the student and motorcycle
                invoice.showInvoice();
                invoice.showInvoice(student);
                invoice.showInvoice(motorcycle);
            }
        }
        else  // customer is a facility
        {
            // Create the facility object using input data
            Facility facility(input[1], input[2], input[3], input[4], input[5]);

            // Create a new Invoice for the facility
            Invoice invoice;
            invoice.setPrice(75);  // Set the base price

            if (input[6] == "1")  // vehicle is a car
            {
                Car car(input[7], input[8], input[9], input[10], input[11]);
                invoice.setServiceCharges(15);  // Set service charges

                // Show the invoice details for the facility and car
                invoice.showInvoice();
                invoice.showInvoice(facility);
                invoice.showInvoice(car);
            }
            else  // vehicle is a motorcycle
            {
                Motorcycle motorcycle(input[7], input[8], input[9], input[10], input[11]);

                // Show the invoice details for the facility and motorcycle
                invoice.showInvoice();
                invoice.showInvoice(facility);
                invoice.showInvoice(motorcycle);
            }
        }
        
        return 0;
}
