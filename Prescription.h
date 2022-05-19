//IT21161506

#pragma once
#include <iostream>
#include "Doctor.h

class Prescription
{
private:
	int PrescriptionID;
	char PatientName;
	char IssueDate;
	char Drugs;

	//Doctor* Doctptr;

public:
	Prescription();
	Prescription(int pID, char pName, char pissueDate, char pdrugs);
	void DisplayPrescription();
	~Prescription();
};
