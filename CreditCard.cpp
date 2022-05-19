//IT21161674
#include "CreditCard.h"
#include <iostream>
#include <cstring>
using namespace std;

CreditCard::CreditCard() {
	strcpy_s(cardType, " ");
	strcpy_s(cardName, " ");
	cardNo = 0;
	strcpy_s(expireDate, " ");
}

CreditCard::CreditCard(char cType[], char cName[], int cNo, char eDate[]) {
	strcpy_s(cardType, cType);
	strcpy_s(cardName, cName);
	cardNo = cNo;
	strcpy_s(expireDate, eDate);
}

void CreditCard::setDetails(char cType[], char cName[], int cNo, char eDate[]) {
	strcpy_s(cardType, cType);
	strcpy_s(cardName, cName);
	cardNo = cNo;
	strcpy_s(expireDate, eDate);
}

void CreditCard::displayDetails() {
	cout << "Card Type : " << cardType << endl;
	cout << "Card Name : " << cardName << endl;
	cout << "Card Number : " << cardNo << endl;
	cout << "Card Expire Date : " << expireDate << endl;
}

CreditCard::~CreditCard() {
	cout << "Destructer runs for Credit Card with Card Number : " << cardNo << endl;
}
