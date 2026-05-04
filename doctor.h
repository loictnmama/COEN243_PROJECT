//HEADER H
// Name : doctor.h
#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>

using namespace std;

//Creation of the class Doctor

class Doctor {

public:

	Doctor(); //Constructor Doctor is called

	void assignDoctorName(string, string); // Assign the first name and the last name of the doctor

		string getDoctorFullName() const; //Give the first name and the last name of the doctor

		

		bool assignDoctorId(long int); // Assign the ID of the patient.

	long int getDoctorId() const; //Get the ID of the doctor

	void assignDoctorSpeciality(string); // Set doctor&#39;s specialty
	string getDoctorSpeciality() const; // Get doctor&#39;s specialty

	void assignYearsOfExperience(int); // Set years of experience
	int getYearsOfExperience() const; // Return years of experience

	void assignBaseSalary(double); // Set yearly base salary
	double getBaseSalary() const; // Get base salary

	void assignBonusRate(double); // Set bonus rate (0–1)
	double getBonusRate() const; // Return bonus rate

	double calculateCompensation() const; // Salary * (1 + bonus)
	void printDoctorInfo() const; // Print all doctor info

		
private:

	string doctorFirstName; //Basic information of the doctor,
	string doctorLastName; // Return the full name of the doctor
	
	long int doctorId; // (8 positive digits)

	string doctorSpeciality; // Cardialogy, Orthopedic, General, Neurology, Pediatrics

	int doctorYearsOfExperience; //Years of experience

	double doctorBaseSalary; // Annual Salary

	double doctorBonusRate; // Performance Bonus rate (0-1)

};
	

#endif // DOCTOR.H
