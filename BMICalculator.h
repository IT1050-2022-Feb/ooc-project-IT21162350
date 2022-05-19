//it21162350
#include <iostream>
#include <cstring>
#include "Admin.h" //3
#include "Appointment.h"
#include "BMICalculator.h"
#include "CreditCard.h"
#include "DietPlan.h"
#include "Doctor.h" //2
#include "MedicalReport.h"
#include "Member.h" //1
#include "MembershipPlan.h"
#include "Payment.h"
#include "Prescription.h"

class BMICalculator
{
private:
	double height;
	double weight;
	int age;
	char gender;
	
	Member* Mem;
	Appointment* Apoint;

public:
	BMICalculator();
	BMICalculator(double M_height, double M_weight, int M_age, char M_gender);
	double Calc_BMI(double M_height, double M_weight);
	~BMICalculator();
};

