//HEADER H 
// Name : patient.h 
#ifndef PATIENT_H 
#define PATIENT_H 
#include <string> 
using namespace std;




//Creation of the class Patient 



class Patient {



public:



	Patient(); //Constructor Patient is called 



	void assignPatientName(string, string); // Assign the first name and the last name of the patient. 
	string getPatientFullName() const; //Give the first name and the last name of the patient. 

	bool assignPatientId(long int); // Assign the ID of the patient.
	long int getPatientId() const; //Get the ID of the patient

	bool assignPatientDateOfBirth(string); //Assign Patient Birth
	string getPatientDateOfBirth() const; //Get Patient Date of Birth

	bool assignPatientDateOfAdmission(string); //Assign date of admission
	string getPatientDateOfAdmission() const; //Get admission of the patient

	bool assignPatientDateOfDischarge(string); //Assign date of discharge
	string getPatientDateOfDischarge() const; //Get discharge of the patient


	



private:



	string patientFirstName;   //Basic information of the patient, start with p for patient 
	string patientLastName; // Return the full name of the patient
	long int patientId;   // (8 positive digits)
	string patientDateOfBirth; //Patient birth
	string patientDateOfAdmission; //Patient admission
	string patientDateOfDischarge; //Patient Discharge


	/* They need to be in the form of (YYYYMMDD)




	*/



	/*



	string bloodType; // Need to give A, AB, B, O, O+ or O-

	long int pAssignedDoctor; (8 positive digits or -1 if there's no doctor)



	*/





};



#endif // PATIENT_H 