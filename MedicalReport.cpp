//it21159862
#include "Medical_Report.h"
#include <iostream>

MedicalReport::MedicalReport() {
	reportId = 0;
	reportName = " ";
	IssuedDate = " ";
	Description = " ";
	Drugs = " ";
}

MedicalReport::MedicalReport(int id, string name, string date, string details, string medicine) {
	reportId = id;
	reportName = name;
	IssuedDate = date;
	Description = details;
	Drugs = medicine;

}

MedicalReport::~MedicalReport() {
	cout << "Medical Report Object Deleted..." << endl;
