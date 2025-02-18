#include "Facility.h"

void Facility::setName(string studentName)
{
    name = studentName;
}

void Facility::setAddress(string add)
{
    address = add;
}

void Facility::setEmail(string mail)
{
    email = mail;
}

void Facility::setPhone(string number)
{
    phone = number;
}

void Facility::setMilesFromCampus(int miles)
{
    milesFromCampus = miles;
}

string Facility::getName()
{
    return name;
}

string Facility::getAddress()
{
    return address;
}

string Facility::getEmail()
{
    return email;
}

string Facility::getPhone()
{
    return phone;
}

int Facility::getMilesFromCampus()
{
    return milesFromCampus;
}

