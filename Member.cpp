//IT21161810
#include "Member.h"
#include <iostream>

using namespace std;

//methods
Member::Member() {
	MemID = "0";
	MemName = " ";
	MemAddress = " ";
	MemPassword = " ";
}

Member::Member(string ID, string Name, string Address, string Password) {
	MemID = ID;
	MemName = Name;
	MemAddress = Address;
	MemPassword = Password;
}
void Member::setMemberDetails() {
	cout << "Member ID: ";
	cin >> MemID;

	cout << "Member Name: ";
	cin >> MemName;

	cout << "Member Address: ";
	cin >> MemAddress;

	cout << "Member Password: ";
	cin >> MemPassword;
}

void Member::displayMemberDitails() {
	cout << "ID: " << MemID << endl;
	cout << "Name: " << MemName << endl;
	cout << "Address: " << MemAddress << endl;
	cout << "Password: " << MemPassword << endl;
}

void Member::updateMemberDetailsUpdate() {
	cout << "Enter New Address: ";
	cin >> MemAddress;

	cout << "Enter New Password: ";
	cin >> MemPassword;
}

Member::~Member() {
	cout << "Member Object Deleted..." << endl;
}

void Member::addAdmin(Admin* Add[]) {
	
}

void Member::deleteAdmin() {

}
