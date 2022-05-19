//it21162350
#pragma once
#include "CreditCard.h"

class Payment: public CreditCard
{
protected:
	double Amount;
	int PayID;
	char PayType;
	int PayDate;

	//Payment* Appointment;

public:
	Payment();
	Payment(double PAmount, int PPayID, char PPayType, int PPayDate);
	void DisplayPaymentDetails();
	~Payment();
};

