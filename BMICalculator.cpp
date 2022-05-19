//it21162350
#include "BMICalculator.h"
#include <iostream>

BMICalculator::BMICalculator() { //default constutor
	height = 0;
	weight = 0;
	age = 0;
	gender = 'M';
}

BMICalculator::BMICalculator(double M_height, double M_weight, int M_age, char M_gender) {
	height = M_height;
	weight = M_weight;
	age = M_age;
	gender = M_gender;
}


double BMICalculator::Calc_BMI(double M_height, double M_weight) {

	double BMI_Value;

	//BMI Value Calculate
	BMI_Value = M_weight / M_height * M_height;
	cout << "BMI Value: " << BMI_Value << endl;

	//Find BMI Status 
	if (BMI_Value >= 25.0) {
		cout << "You are overweight..." << endl;
	}
	else if (BMI_Value >= 18.5) {
		cout << "You are in healthy range..." << endl;
	}
	else {
		cout << "You are low weight..." << endl;
	}

	return 0;
}

BMICalculator::~BMICalculator() {
	cout << "BMI Calc Deleted..." << endl;
}

