/*
 * controller.h
 *
 *  Created on: Jul 4, 2022
 *      Author: MacbookPC
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <iostream>
#include <functions.h>

using namespace std;

char login(string uname, string pword){
}

void mainMenu(char userType) {

	if (userType == "S") { //S for sales order executive
		cout << "1) View Purchase Order List" << endl;
		cout << "2) Exit" << endl;
	} else if (userType == "A") { //A for administrator
		cout << "1) View Purchase Order List" << endl;
		cout << "2) Generate Report" << endl;
		cout << "3) Exit" << endl;
	} else {
		cout << "Error" << endl;
	}
}

void salesOrderExecutive(int choice) {
	switch (choice) {
	case 1:
		orderList();
		break;
	case 2:
		cout << "<--- Exiting --->" << endl;
		exit(0);
		break;
	default:
		break;
	}
}

void administrator(int choice) {
	switch (choice) {
	case 1:
		orderList();
		break;
	case 2:
		reporting();
		break;
	case 3:
		cout << "<--- Exiting --->" << endl;
		exit(0);
		break;
	default:
		break;
	}
}

int main(char userType) {
	int cont;
	do {
		mainMenu(userType);
		int choice;

		cout << "\n Select? " << endl;
		cin >> choice;

		if (userType == "S") {
			salesOrderExecutive(choice);
		} else if (userType == "A") {
			administrator(choice);
		} else {
			cout << "Error" << endl;
		}

		cout << "\nContinue?" << endl;
		cout << "1) Yes" << endl;
		cout << "2) No" << endl;
		cin >> cont;

	} while (cont == 1);

	cout << "<--- Exiting Program --->" << endl;

	return 0;
}

#endif /* CONTROLLER_H_ */
