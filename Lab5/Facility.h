#ifndef FACILITY_H
#define FACILITY_H

// matthew

#include <string>
using namespace std;

class Facility
{
private:
    string name;
    string address;
    string email;
    string phone;
    string milesFromCampus;
public:
    Facility() : name(""), address(""), email(""), phone(""), milesFromCampus("") {} ;
    Facility(string n, string add, string em, string number, string miles)  : name(n), address(add), email(em), phone(number), milesFromCampus(miles) {} ;
    void setName(string studentName);
    void setAddress(string add);
    void setEmail(string mail);
    void setPhone(string number);
    void setMilesFromCampus(string miles);
    string getName();
    string getAddress();
    string getEmail();
    string getPhone();
    string getMilesFromCampus();
};

#endif

