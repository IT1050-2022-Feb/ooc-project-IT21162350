//it21162350
#include "Diet_Plan.h"
#include <iostream>

using namespace std;
DietPlan::DietPlan() {
	dietID = 0;
	dietPlanDuration = '0';
	dietPlanName = " ";
	dietPlanType = " ";

}

DietPlan::DietPlan(int PlanID, string PlanType, string PlanName, string PlanDuration) {
	dietID = PlanID;
	dietPlanDuration = PlanDuration;
	dietPlanName = PlanName;
	dietPlanType = PlanType;
}

void DietPlan::DisplayDietPlan() {
	cout << "Diet Plan ID: " << dietID << endl;
	cout << "Diet Plan Name: " << dietPlanName << endl;
	cout << "Diet Plan Duration: " << dietPlanDuration << endl;
	cout << "Diet Plan Type: " << dietPlanDuration << endl;
}

DietPlan::~DietPlan() {
	cout << "Diet Plan Deleted..." << endl;
}
