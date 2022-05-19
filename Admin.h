//IT21161506

#pragma once
#include <iostream>
#include <cstring>

class Admin {
private:
	int AdminId;
	string AdminName;
	string Admintask;

public:
	Admin();
	Admin(int Adid, string AdName, string Adtask);
	void setAdminDetails();
	void GetAdmindetails();
	~Admin();
};
