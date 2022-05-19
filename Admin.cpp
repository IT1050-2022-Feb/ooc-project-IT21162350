//IT21161506
#include "Admin.h"
#include <iostream>

Admin::Admin() { //default constutor
	AdminId = 0;
	AdminName = " ";
	Admintask = " ";

}

Admin::Admin(int Adid, string AdName, string Adtask) {

	AdminId = Adid;
	AdminName = AdName;
	Admintask = Adtask;
}

void Admin::setAdminDetails() {
	cout << "Enter Admin ID:";
	cin >> AdminId;

	cout << "Enter Admin Name:";
	cin >> AdminName;

	cout << "Enter Admin task: ";
	cin >> Admintask;
}

Admin::~Admin() {
	cout << "Destructor Runs..." << endl;
}

