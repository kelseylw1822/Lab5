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
    string age;
public:
    Student() : name(""), address(""), email(""), phone(""), age("") {} ;
    Student(string n, string add, string em, string number, string theAge)  : name(n), address(add), email(em), phone(number), age(theAge) {} ;
    void setName(string studentName);
    void setAddress(string add);
    void setEmail(string mail);
    void setPhone(string number);
    void setAge(string years);
    string getName();
    string getAddress();
    string getEmail();
    string getPhone();
    string getAge();
};

#endif
