#include "doctor.h"
#include <iostream>
using namespace std;

Doctor::Doctor()
{
    doctorFirstName = "";
    doctorLastName = "";
    doctorId = 0;
    doctorSpeciality = "";
    YearsOfExperience = 0;
    doctorBaseSalary = 0.0;
    performanceBonus = 0.0;
}

void Doctor::assignDoctorName(string first, string last)
{
    doctorFirstName = first;
    doctorLastName = last;
}

string Doctor::getDoctorFullName() const
{
    return doctorFirstName + " " + doctorLastName;
}

bool Doctor::assignDoctorId(long int id)
{
    if (id >= 10000000 && id <= 99999999) {
        doctorId = id;
        return true;
    }
    return false;
}

long int Doctor::getDoctorId() const
{
    return doctorId;
}

// The rest of the functions can be implemented later
void Doctor::assignDoctorSpeciality(string s) { doctorSpeciality = s; }
string Doctor::getDoctorSpeciality() const { return doctorSpeciality; }

void Doctor::assignYearsOfExperience(int y) { YearsOfExperience = y; }
int Doctor::getYearsOfExperience() const { return YearsOfExperience; }

void Doctor::assignBaseSalary(double s) { doctorBaseSalary = s; }
double Doctor::getBaseSalary() const { return doctorBaseSalary; }

void Doctor::assignBonusRate(double b) { performanceBonus = b; }
double Doctor::getBonusRate() const { return performanceBonus; }

double Doctor::calculateCompensation() const
{
    return doctorBaseSalary * (1.0 + performanceBonus);
}

void Doctor::printDoctorInfo() const
{
    cout << "Doctor: " << getDoctorFullName() << endl;
    cout << "ID: " << doctorId << endl;
}
