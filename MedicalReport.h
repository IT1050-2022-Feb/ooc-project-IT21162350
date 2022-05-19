//it21159862
#pragma once
#include <iostream>
#include "Doctor.h"

class MedicalReport
{
private:
	int reportId;
	string reportName;
	string IssuedDate;
	string Description;
	string Drugs;

	//Doctor* Doct;

public:
	MedicalReport();
	MedicalReport(int id, string name, string date, string details, string medicine);
	~MedicalReport();
};

