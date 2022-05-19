//it21162350
#include "Payment.h"
#include <iostream>
#include "Appointment.h"

using namespace std;

Payment::Payment() {
	Amount = 0;
	PayType = ' ';
	PayDate = 0;
	PayID = 0;

	Appointment = new Payment;
}

Payment::Payment(double PAmount, int PPayID, char PPayType, int PPayDate ) {
	Amount = PAmount;
	PayID = PPayID;
	PayType = PPayType;
	PayDate = PPayDate;

}

void Payment::DisplayPaymentDetails() {
	cout << "Pay ID: " << PayID << endl;
	cout << "Pay Type: " << PayType << endl;
	cout << "Pay Date: " << PayDate << endl;
	cout << "Amount: " << Amount << endl;
}

Payment::~Payment() {
	cout << "Payment Deleted..." << endl;
}
