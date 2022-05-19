//IT21161674
#include "Appointment.h"
#include <iostream>
#include <cstring>
using namespace std;

Appointment::Appointment() {
	appointmentId = 0;
	strcpy_s(appointmentName, " ");
	appointmentPrice = 0.0;
}

Appointment::Appointment(int apID, char apName[], double apPrice) {
	appointmentId = apID;
	strcpy_s(appointmentName, apName);
	appointmentPrice = apPrice;
}

void Appointment::displayAppointment() {
	cout << "Appointmant Id : " << appointmentId << endl;
	cout << "Appointment Name : " << appointmentName << endl;
	cout << "Appointment Price : " << appointmentPrice << endl;
}

Appointment::~Appointment() {
	cout << "Destructer runs for Appointment with Appointment Id : " << appointmentId << endl;
}
