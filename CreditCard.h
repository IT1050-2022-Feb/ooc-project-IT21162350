//IT21161674
class CreditCard {
protected:
	char cardType[50];
	char cardName[50];
	int cardNo;
	char expireDate[50];

public:
	CreditCard();
	CreditCard(char cType[], char cName[], int cNo, char eDate[]);
	void setDetails(char cType[], char cName[], int cNo, char eDate[]);
	void displayDetails();
	~CreditCard();
};
