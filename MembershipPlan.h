//IT21161810

#pragma once
#include <iostream>
#include "Payment.h"

using namespace std;



class MembershipPlan
{
private:
	int membershipID;
	string membershipType;
	string membershipName;
	double PlanPrice;

	//Payment* Pay;

public:
	MembershipPlan();
	MembershipPlan(int ID, string Type, string Name, double Price);
	void getMembershipPlan();
	void updateMembershipPlan();
	void displayMembershipPlan();
	~MembershipPlan();
};
