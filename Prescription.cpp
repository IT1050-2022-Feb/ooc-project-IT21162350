//IT21161506

#include "Prescription.h"
#include <iostream>

using namespace std;

Prescription::Prescription() {

	PrescriptionID = 0;
	PatientName = ' ';
	IssueDate = 0;
	Drugs = ' ';
}

Prescription::Prescription(int pID, char pName, char pissueDate, char pdrugs) {
	PrescriptionID = pID;
	PatientName = pName;
	IssueDate = pissueDate;
	Drugs = pdrugs;

}

void Prescription::DisplayPrescription() {
	cout << "Prescription ID : " << PrescriptionID << endl;
	cout << "Patient Name : " << PatientName << endl;
	cout << "IssueDate : " << IssueDate << endl;
	cout << "Drugs : " << Drugs << endl;
}

Prescription::~Prescription() {
	cout << "Payment Deleted..." << endl;
}

