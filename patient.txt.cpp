//CLASS IMPLEMENTATION CPP 
//Name : patient.cpp   
#include "patient.h" 
#include <iostream> 
using namespace std; 

  

// Constructor initialization 

  

Patient::Patient() { 

  

patientFirstName = ""; 

patientLastName = "";  //Set first name and last name to blank

patientId = 00000000; //Set Id to 0000 0000
  
patientDateOfBirth = ""; //Nothing in the patient date of birth

patientDateOfAdmission = ""; //Nothing in the patient date of admission

} 

  

void Patient::assignPatientName(string firstName, string lastName) { 

  

patientFirstName = firstName; 

patientLastName = lastName;  //Set name of the patient

} 

  

string Patient::getPatientFullName() const { 

  

return patientFirstName + " " + patientLastName; //Display the full name of the patient

  

} 

bool Patient::assignPatientId(long int newID) {

    if (newID >= 10000000 && newID <= 99999999) {
        patientId = newID;
        return true; //ID of 8 digits verifier
    }
    return false;
}


long int Patient :: getPatientId() const {

    return patientId;

}

bool Patient::assignPatientDateOfBirth(string birth) {

    // Check required length: "YYYYMMDD" = 8 digits
    if (birth.length() != 8)
        return false;

    // Ensure all characters are digits
    for (char c : birth) {
        if (!isdigit(c)) return false;
    }

    // Extract year, month, day
    string yearStr = birth.substr(0, 4);
    string monthStr = birth.substr(4, 2);
    string dayStr = birth.substr(6, 2);

    int year = stoi(yearStr);
    int month = stoi(monthStr);
    int day = stoi(dayStr);

    // Range validation
    if (year < 1900 || year > 2025) return false;
    if (month < 1 || month > 12) return false;
    if (day < 1 || day > 31) return false;

    // Assign if valid
    patientDateOfBirth = birth;
    return true;

}

string Patient::getPatientDateOfBirth() const {
    return patientDateOfBirth;
}

bool Patient::assignPatientDateOfAdmission(string admission) {

    // Check required length: "YYYYMMDD" = 8 digits
    if (admission.length() != 8)
        return false;

    // Ensure all characters are digits
    for (char c : admission) {
        if (!isdigit(c)) return false;
    }

    // Extract year, month, day
    string yearStr = admission.substr(0, 4);
    string monthStr = admission.substr(4, 2);
    string dayStr = admission.substr(6, 2);

    int year = stoi(yearStr);
    int month = stoi(monthStr);
    int day = stoi(dayStr);

    // Range validation
    if (year < 1925 || year > 2025) return false;
    if (month < 1 || month > 12) return false;
    if (day < 1 || day > 31) return false;

    // Assign if valid
    patientDateOfAdmission = admission;
    return true;

}

string Patient::getPatientDateOfAdmission() const {
    return patientDateOfAdmission;
}

bool Patient::assignPatientDateOfDischarge(string discharge) {

    // Check required length: "YYYYMMDD" = 8 digits
    if (discharge.length() != 8)
        return false;

    // Ensure all characters are digits
    for (char c : discharge) {
        if (!isdigit(c)) return false;
    }

    // Extract year, month, day
    string yearStr = discharge.substr(0, 4);
    string monthStr = discharge.substr(4, 2);
    string dayStr = discharge.substr(6, 2);

    int year = stoi(yearStr);
    int month = stoi(monthStr);
    int day = stoi(dayStr);

    // Range validation
    if (year < 1925 || year > 2025) return false;
    if (month < 1 || month > 12) return false;
    if (day < 1 || day > 31) return false;

    // Assign if valid
    patientDateOfDischarge = discharge;
    return true;

}

string Patient::getPatientDateOfDischarge() const {
    return patientDateOfDischarge;
}