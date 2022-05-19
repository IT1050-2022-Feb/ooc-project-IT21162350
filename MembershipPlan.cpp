//IT21161810

#include "MembershipPlan.h"
#include <iostream>


MembershipPlan::MembershipPlan() {
	membershipID = 0;
	membershipType = " ";
	membershipName = " ";
	PlanPrice = 0;

	Pay = new Payment;
}

MembershipPlan::MembershipPlan(int ID, string Type, string Name, double Price) {
	membershipID = ID;
	membershipType = Type;
	membershipName = Name;
	PlanPrice = Price;
}

void MembershipPlan::getMembershipPlan() {
	cout << "Membership Plan ID: ";
	cin >> membershipID;

	cout << "Membership Plan Type: ";
	cin >> membershipType;

	cout << "Membership Plan Name: ";
	cin >> membershipName;

	cout << "Enter Plan Price: ";
	cin >> PlanPrice;
}

void MembershipPlan::updateMembershipPlan() {
	cout << "Enter New Plan Name: ";
	cin >> membershipName;

	cout << "Enter New Price: ";
	cin >> PlanPrice;
}

void MembershipPlan::displayMembershipPlan() {
	cout << "Plan ID: " << membershipID << endl;
	cout << "Plan Name: " << membershipName << endl;
	cout << "Type: " << membershipType << endl;
	cout << "Price: " << PlanPrice << endl;
}

MembershipPlan::~MembershipPlan() {
	cout << "Delete Object Membership Plan..." << endl;
}
