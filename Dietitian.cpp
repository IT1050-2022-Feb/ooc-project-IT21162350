//IT21161810

#include "Dietitian.h"
#include <iostream>

Dietitian::Dietitian() {
	dietitianID = 0;
	dietitianName = " ";
}

Dietitian::Dietitian(int ID, string Name) {
	dietitianID = ID;
	dietitianName=Name;
}

Dietitian::~Dietitian() {
	cout << "Dietitian Object Deleted..." << endl;
}

Doctor::Doctor() {
	docterID = 0;
	strcpy_s(docterName, " ");
  
  }