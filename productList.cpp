/****** STUDENT NAME   : NİSANUR BAŞTOR *****
 ****** STUDENT NUMBER : B201202044 *********/

#include <iostream>
using namespace std;

int const MAX = 10;
enum CATEGORY { FOOD = 1, DRINK = 2, JUNK = 3, STATIONARY = 4 };

struct PRODUCT {
	string productName;
	int productId;
	int price;
	double taxPrice;
	CATEGORY productType;
};

void addProduct(PRODUCT*addedProduct);
void printProduct(PRODUCT* addedProduct);

int main() {

	PRODUCT products[MAX];
	products[0].productName = "BREAD";
	products[0].productId = 1;
	products[0].productType = FOOD;
	products[0].price = 4;

	products[1].productName = "AYRAN";
	products[1].productId = 2;
	products[1].productType = DRINK;
	products[1].price = 4;

	products[2].productName = "CHIPS";
	products[2].productId = 3;
	products[2].productType = JUNK;
	products[2].price = 9;

	products[3].productName = "PENCIL";
	products[3].productId = 4;
	products[3].productType = STATIONARY;
	products[3].price = 20;

	printProduct(products);

	
	for (int i = 0; i < 6; i++) {   
		string y_n;
		cout << "DO YOU WANT TO ADD NEW PRODUCT [Y/N] ? ";
		cin >> y_n;

		if (y_n == "Y") {
			addProduct(products);
		}
		else if (y_n == "N")
			return 0;
		else
			cout << "Please enter Y or N. " << endl;
	}
	
		return 0;
}



void printProduct(PRODUCT *addedProduct) {         //THIS FUNCTION PRINTS TO THE SCREEN INFORMATION .

	cout << "---------------------------------" << endl;
	cout << "----------PRODUCT LIST-----------" << endl;
	cout << "---------------------------------" << endl;
	
	for (int i = 0; i < 4; ++i) {

		cout << "PRODUCT NAME.........: " << addedProduct[i].productName << endl;
		cout << "PRODUCT ID...........: " << addedProduct[i].productId << endl;
		cout << "PRODUCT TYPE.........: ";

		switch (addedProduct[i].productType) {
		case 1:
			cout << "FOOD" << endl;
			break;
		case 2:
			cout << "DRINK" << endl;
			break;
		case 3:
			cout << "JUNK" << endl;
			break;
		case 4:
			cout << "STATIONARY" << endl;
			break;
		}
		cout << "PRODUCT PRICE........: " << addedProduct[i].price << endl;
		cout << "TAX PRICE............: ";

		switch (addedProduct[i].productType) {
		case 1:
			addedProduct[i].taxPrice = 3 * (double)addedProduct[i].price / 100;
			cout << addedProduct[i].taxPrice << endl;
			break;
		case 2:
			addedProduct[i].taxPrice = 5 * (double)addedProduct[i].price / 100;
			cout << addedProduct[i].taxPrice << endl;
			break;
		case 3:
			addedProduct[i].taxPrice = 18 * (double)addedProduct[i].price / 100;
			cout << addedProduct[i].taxPrice << endl;
			break;
		case 4:
			addedProduct[i].taxPrice = 8 * (double)addedProduct[i].price / 100;
			cout << addedProduct[i].taxPrice << endl;
			break;
		}

		cout << "----------------------------------" << endl;
	}
}


void addProduct(PRODUCT* addedProduct) {  //THIS FUNCTION ASKES TO USER TO ADD MORE PRODUCT .
	cout << "PRODUCT NAME.........: ";
	cin >> addedProduct->productName;

	cout << "PRODUCT ID...........: ";
	cin >> addedProduct->productId;

	int productType2;
	cout << "PRODUCT TYPE.........[FOOD -> 1, DRINK -> 2, JUNK -> 3, STATIONARY -> 4]: ";
	cin >> productType2;

	switch (productType2) {
	case 1:
		addedProduct->productType = FOOD;
		break;
	case 2:
		addedProduct->productType = DRINK;
		break;
	case 3:
		addedProduct->productType = JUNK;
		break;
	case 4:
		addedProduct->productType = STATIONARY;
		break;

	}

	cout << "PRODUCT PRICE........: ";
	cin >> addedProduct->price;

	cout << "TAX PRICE............: ";
	switch (addedProduct->productType)
	{
	case 1: 
		addedProduct->taxPrice = 3 * (double)addedProduct->price / 100;
		cout << addedProduct->taxPrice << endl;
		break;
	case 2:
		addedProduct->taxPrice = 5 * (double)addedProduct->price / 100;
		cout << addedProduct->taxPrice << endl;
		break;
	case 3:
		addedProduct->taxPrice = 18 * (double)addedProduct->price / 100;
		cout << addedProduct->taxPrice << endl;
		break;
	case 4:
		addedProduct->taxPrice = 8 * (double)addedProduct->price / 100;
		cout << addedProduct->taxPrice << endl;
		break;
	}
	
}