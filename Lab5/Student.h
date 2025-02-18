#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
private:
    string name;
    string address;
    string email;
    string phone;
    int milesFromCampus;
public:
    Student() : name(""), address(""), email(""), phone(""), milesFromCampus(0) {} ;
    Student(string n, string add, string em, string number, int miles)  : name(n), address(add), email(em), phone(number), milesFromCampus(miles) {} ;
    void setName(string studentName);
    void setAddress(string add);
    void setEmail(string mail);
    void setPhone(string number);
    void setMilesFromCampus(int miles);
    string getName();
    string getAddress();
    string getEmail();
    string getPhone();
    int getMilesFromCampus();
};

#endif
