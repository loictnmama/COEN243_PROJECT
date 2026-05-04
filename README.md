Hospital Management System
Objective
Create a fully functioning system that handles the records of patients and doctors in a
hospital. Based on the following narrative, develop an object-oriented design to represent
the different entities in the system.
Part 1: Patients
The initial data of patients is maintained in a file called patients.txt (the first line shows
the number of patients). Each record in this file contains:
• Patient First Name (String): The first name of the patient
• Patient Last Name (String): The last name of the patient
• Patient ID (long int): an 8-digit positive number representing the ID of the patient
• Assigned Doctor (long int): an 8-digit positive number representing the ID of the
doctor assigned to the patient; -1 if no doctor is assigned
• Date of Birth (String): has the format YYYYMMDD example: 1st of January 2024 is
“20240101”
• Blood Type (String): can be a blood type: A, AB, B, O, O+, O-
• Diagnosis (String): a string representing the diagn
• Date of Admission (String): has the format YYYYMMDD example: 1st of January 2024
is “20240101”
• Discharge Date (String): has the format YYYYMMDD example: 1st of January 2024 is
“20240101”
1
Class: Patient
Attributes:
• All the above fields are private attributes.
Member Functions:
• Setters and Getters for all attributes.
• IsDischarged(): Returns true if the discharge date is not -1; otherwise, false.
• Patient Status(): Returns the status based on the diagnosis:
– If diagnosis contains the word “critical”, return Critical.
– If diagnosis contains the word “moderate”, return Moderate.
– Otherwise, return Stable.
• Print Patient Info(): Displays all the patient’s information of the data members.
Part 2: Doctors
The initial information of doctors is maintained in a file called doctors.txt (the first line
shows the number of doctors). Each record in this file contains:
• Doctor First Name: The first name of a doctor
• Doctor Last Name: The last name of a doctor
• Doctor ID: an 8 Digits number representing the ID
• Specialty: a string representing the specialty of the doctor
• Years of Experience: an integer representing the number of years of experience
• Base Salary: A double representing the salary of a doctor
• Performance Bonus (Percentage): a double from 0 to 1
Class: Doctor
Attributes:
• All the above fields are private attributes.
Member Functions:
• Setters and Getters for all attributes.
• Calculate Compensation(): Computes the new yearly salary based on the performance
bonus percentage(baseSalary * (1 + bonusPercentage)).
• Print Doctor Info(): Prints all the information of a doctor.
2
Hospital Class
This class reads the input files and creates dynamic arrays for patients and doctors.
Attributes:
• A pointer to a vector of Patient objects.
• A pointer to a vector of Doctor objects.
Constructor:
• Reads patients.txt and doctors.txt files to create the dynamic arrays.
Member Functions:
• Find Oldest Patient(): Finds and prints the details of the oldest patient.
• Count Critical Patients(): Counts and returns the total number of critical patients.
• Count In Patients(): Counts and returns how many patients in hospital.
• Doctors By Specialty(): Accepts a speciality as input and prints the names of all
doctors with that speciality.
• Show Patient by ID(id): Takes the id of a patient and displays the data of the patient.
Otherwise, the method displays: “No patient has the provided ID”.
• Show Doctor by ID(id): Takes the id of a doctor and displays the data of the patient.
Otherwise, the method displays: “No patient has the provided ID”.
• Show Assigned Doctor(Patient ID): This method takes the ID of a given Patient
and displays his assigned doctor.
• Show Assigned Patients(Doctor ID): Given the ID of a doctor, this method displays
the patients’ data assigned to the doctor. If no patients are assigned, the method displays
“no patients assigned”.
• Append Patient To File(): enrolls a new patient, adds a new row in patients.txt
and updates the number of patients accordingly. Information shown in each row:
FirstName LastName PatientID AssignedDoctorID DateOfBirth BloodType Diagnosis DateAdmitted DateDischarged.
• Append Doctor To File(): recruits a new doctor, adds a new row in doctor.txt and
updates the number of doctors accordingly. Information shown in each row:
FirstName LastName DoctorID Specialty YearsExperience BaseSalary BonusPercent.
3
Part 3: Driver
Testing:
1. Create an object of the Hospital class to read the input files and populate the patient
and doctor arrays.
2. Test the member functions of the Hospital class and display the results.
3. Test the individual methods of Patient and Doctor classes by manually creating objects
or using the objects created in Part 1.
4. Test enrolling new patients and adding new doctors. (Update both the vector of Patient
and Doctor as well as the patients.txt and doctors.txt files).
5. (Optional)You can test all the member functions defined in Hospital Class.
Requirements
• Include at least 5 records for patients and doctors in the input files.
• Make use of exception handling wherever applicable (e.g., invalid data entries in files).
• Implement file I/O for loading and saving data.
