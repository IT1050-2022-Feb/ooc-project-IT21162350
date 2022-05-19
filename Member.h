//IT21161810
#pragma once
#include <iostream>
#include "BMICalculator.h"
#include "DietPlan.h"
#include "Admin.h"
#include "Appointment.h"
#include "MembershipPlan.h"


class Member
{
private:
	string MemID;
	string MemName;
	string MemAddress;
	string MemPassword;
	
	BMICalculator * BMICalc;
	Admin * Addmin;
	Appointment * Appointment;
	MembershipPlan * MemShipPlan;
	Diet_Plan * Dplan[];



public:
	Member();
	Member(string ID, string Name, string Address, string Password);
	void setMemberDetails();
	void displayMemberDitails();
	void updateMemberDetailsUpdate();
	~Member();
	void addAdmin(Admin* Add[]);
	void deleteAdmin();
};

