//IT21161810

#pragma once
#include <iostream>
#include "Admin.h"


class Dietitian
{
	private:
		int dietitianID;
		string dietitianName;

		Admin *Admn[];

	public:
		Dietitian();
		Dietitian(int ID, string Name);
		~Dietitian();	
		void addAdmin(Admin *Admn[]);
};
