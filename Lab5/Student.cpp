#include "Student.h"

void Student::setName(string studentName)
{
    name = studentName;
}

void Student::setAddress(string add)
{
    address = add;
}

void Student::setEmail(string mail)
{
    email = mail;
}

void Student::setPhone(string number)
{
    phone = number;
}

void Student::setMilesFromCampus(int miles)
{
    milesFromCampus = miles;
}

string Student::getName()
{
    return name;
}

string Student::getAddress()
{
    return address;
}

string Student::getEmail()
{
    return email;
}

string Student::getPhone()
{
    return phone;
}

int Student::getMilesFromCampus()
{
    return milesFromCampus;
}

