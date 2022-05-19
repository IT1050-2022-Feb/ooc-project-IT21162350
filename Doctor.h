//IT21161674
#pragma once
#include "Appointment.h"
#include "Admin.h"
#include "Medical_Report.h"
#include "Prescription.h"

class Doctor {
protected:
	int docterID;
	char docterName[50];
	char docterSpeciality[50];
	int docterExperience;

	
	Appointment* Doc[1];
	Admin* Adminn[1];
	MedicalReport* Mreport;
	Prescription* preseption;
	

public:
	Doctor();
	Doctor(int docID, char docName[], char docSp[], int docExp);
	void setDoctorDetails();
	void getDocterDetails();
	void addAdmin(Admin *Admin[0]);
	~Doctor();
};
