//Homework problems from feb 3 

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	/*
	//problem #1 compound interest over a period of time with withdrawals
	//variable declaration
	double accountBalance;
	double interest = 1.005; //interest rate of 6% compounded monthly (0.5%)
	double withdrawal;
	double monthCount = 0;

	cout << "This program calculates the number of months a starting balance will last\n given 6% annual interest compounded monthly and monthly withdrawals." << endl;
	cout << "Enter starting balance: " << endl;
	cin >> accountBalance;

	cout << "Enter monthly withdrawal amount: " << endl;
	cin >> withdrawal;

	while ((accountBalance - 500) >= 0) {

		accountBalance = (accountBalance * interest) - withdrawal;
		//accountBalance = accountBalance - withdrawal;
		++monthCount;
		cout << accountBalance << endl;
	}

	cout << "The starting balance will last a total of " << monthCount << " months before running out." << endl;

	*/
	/*
	//Problem 2 surface area of a house for painter quote

	//variable declaration
	double widthHouse, lengthHouse, heightHouse;
	int doors, windows;
	double widthDoor, heightDoor;
	double widthWindow, heightWindow;
	double areaHouse, areaWindow, areaDoor, areaTotal;

	
	cout << "This program calculates the surface area of a house minus doors & windows" << endl;
	cout << "Enter the width of the house: " << endl;
	cin >> widthHouse;

	cout << "Enter the length of the house: " << endl;
	cin >> lengthHouse;

	cout << "Enter the height of the house: " << endl;
	cin >> heightHouse;

	cout << "Enter the number of doors: " << endl;
	cin >> doors;

	cout << "Enter the width of the doors: " << endl;
	cin >> widthDoor;

	cout << "Enter the height of the doors: " << endl;
	cin >> heightDoor;

	cout << "Enter the number of windows: " << endl;
	cin >> windows;

	cout << "Enter the width of the windows: " << endl;
	cin >> widthWindow;

	cout << "Enter the height of the window: " << endl;
	cin >> heightWindow;

	areaHouse = (2 * heightHouse * lengthHouse) + (2 * heightHouse * widthHouse); 
	areaDoor = (doors * widthDoor * heightDoor);
	areaWindow = (windows * widthWindow * heightWindow);
	areaTotal = areaHouse - areaDoor - areaWindow;

	cout << "The total paintable area of the house exterior is: " << areaTotal << endl;
	*/
	/*
	// fizzbuzz outputs fizz for multiples of one number buzz for multiples of another and fizzbuzz for multiples of both

	int i;
	int fizz = 3;
	int buzz = 5;
	for (i = 1; i <= 100; i++) {
		
		if (i % fizz == 0 && i % buzz == 0) {
			cout << "FizzBuzz" << endl;
		}
		
		else if (i % buzz == 0) {
			cout << "Buzz" << endl;
		}

		else if (i % fizz == 0) {
			cout << "Fizz" << endl;
		}
		else {
			cout << i << endl;
		}

	}
	*/
	
	//String basics
	string myString = "Hello World";

	cout << myString.length() << " characters." << endl;
	cout << myString.substr(6,5) << endl;
	cout << myString.substr(6) << endl;

	myString = myString + " " + "add some more";

	cout << myString.substr(6, 5) << endl;
	cout << myString.substr(6) << endl;
	cout << myString << endl;
	

	system("pause");

	return 0;
}