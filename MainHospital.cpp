//MAIN 
#include "patient.h" 
#include <iostream> 
#include <limits> //It will look out for invalid inputs

using namespace std;



int main() {



    Patient p; // Creation of a new patient

    string first = "", last = ""; //Variables used to assign the names


    // User entering a new patient name

    cout << "Enter the patient's first name: ";
    getline(cin, first);
    cout << "Enter the patient's last name: ";
    getline(cin, last);

    p.assignPatientName(first, last); //Assign the name of the patient

    long int newPatientId; //Variable used to enter the patient ID
    bool success = false; //8 valid digits boolean variable

    //User entering the patient ID

    while (!success) {
        cout << "Enter an 8-digit ID: ";
        cin >> newPatientId;

        //If user enters letters, clear cin
        if (!cin) {
            cin.clear(); // fixes fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // remove bad input
            cout << "Invalid input! Please enter numbers only.\n";
            continue;
        }

        // Remove leftover characters from input stream
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (p.assignPatientId(newPatientId)) {
            cout << "ID assigned successfully!" << endl;
            success = true;
        }
        else {
            cout << "Invalid ID! Must be exactly 8 digits." << endl;
        }
    }

    //The user enter the date of birth of the patient

    string dateOfBirth; //Date of birth of the patient
    bool dateOfBirthSuccess = false; //Date validation

    while (!dateOfBirthSuccess) {
        cout << "Enter date of birth (YYYYMMDD): ";
        getline(cin, dateOfBirth);

        if (p.assignPatientDateOfBirth(dateOfBirth)) {
    
            dateOfBirthSuccess = true;
        }
        else {
            cout << "Invalid format! Please follow YYYYMMDD.\n";
        }
    }

    //The user enter the date of admission of the patient

    string dateOfAdmission; //Date of birth of the patient
    bool dateOfAdmissionSuccess = false; //Date validation

    while (!dateOfAdmissionSuccess) {
        cout << "Enter date of admission (YYYYMMDD): ";
        getline(cin, dateOfAdmission);

        if (p.assignPatientDateOfAdmission(dateOfAdmission)) {
         
            dateOfAdmissionSuccess = true;
        }
        else {
            cout << "Invalid format! Please follow YYYYMMDD.\n";
        }
    }

    //The user enter the date of discharge of the patient

    string dateOfDischarge; //Date of birth of the patient
    bool dateOfDischargeSuccess = false; //Date validation

    while (!dateOfDischargeSuccess) {
        cout << "Enter date of discharge (YYYYMMDD): ";
        getline(cin, dateOfDischarge);

        if (p.assignPatientDateOfDischarge(dateOfDischarge)) {
       
            dateOfDischargeSuccess = true;
        }
        else {
            cout << "Invalid format! Please follow YYYYMMDD.\n";
        }
    }


    //Test machine 

    cout << endl;
    cout << "_______________________\n";
    cout << "The patient full name is : "
        << p.getPatientFullName() << "\n";   // extra spacing
    cout << "ID: " << p.getPatientId() << endl;
    cout << "Date of birth : " << p.getPatientDateOfBirth() << endl;
    cout << "Date of admission : " << p.getPatientDateOfAdmission() << endl;
    cout << "Date of discharge : " << p.getPatientDateOfDischarge() << endl;

   

    return 0;

}