/*
 * Main.cpp
 *
 *  Created on: Jul 4, 2022
 *      Author: MacbookPC
 */

#include <iostream>
#include "controller.h"
//#include "functions.h"

using namespace std;

int main() {
	string username;
	string password;
	char userType;
	int choice;
	bool cont = true;

	cout << "<--- Purchase Order (PO) Management System --->" << endl;

	while (cont) {
		cout << "\n1) Login" << endl;
		cout << "2) Exit" << endl;
		cout << "\nSelect: ";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "\nEnter username: ";
			cin >> username;
			cout << "\nEnter password: ";
			cin >> password;

			userType = login(username, password);
			if (userType == 'S') {
				cout << "\nLogin Success. \nWelcome Sales Order Executive, " << username << endl;
				cont = false;
				handler(username, userType);
			} else if (userType == 'A') {
				cout << "\nLogin Success. \nWelcome Administrator, " << username << endl;
				cont = false;
			} else {
				cout << "\nLogin Failed. \nInvalid Credentials, Try Again.\n" << endl;
			}
			break;
		case 2:
			cout << "<--- Exiting --->" << endl;
			cont = false;
			return 0;
			break;
		default:
			cout << "Invalid input. Try again." << endl;
		}
	}
}

