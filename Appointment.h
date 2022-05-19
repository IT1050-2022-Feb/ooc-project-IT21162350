//IT21161674
#pragma once
#include <iostream>
#include "Member.h"
#include "Doctor.h"

class Appointment {
protected:
	int appointmentId;
	char appointmentName[50];
	double appointmentPrice;

	Member* Mem;
	Doctor* Doc;

public:
	Appointment();
	Appointment(int apID, char apName[], double apPrice);
	void displayAppointment();
	~Appointment();
};
