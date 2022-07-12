/*
 * controller.h
 *
 *  Created on: Jul 4, 2022
 *      Author: MacbookPC
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <iostream>
#include <fstream>
#include <cstring>
#include "functions.h"

using namespace std;

//testing 123

void salesOrderExecutive(string uname, char userType, int choice) {
	switch (choice) {
	case 1:
		break;
	case 2:
		cout << "<--- Exiting --->" << endl;
		exit(0);
		break;
	default:
		break;
	}
}

void administrator(string uname, char userType, int choice) {
	switch (choice) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		cout << "<--- Exiting --->" << endl;
		exit(0);
		break;
	default:
		break;
	}
}

char login(string uname, string pword) {
	string username;
	string password;
	string mystring;
	string type;
	char userType;

	ifstream userfile("Users.txt");

	while (userfile) {
		getline(userfile, username, '|');
		getline(userfile, password, '|');
		getline(userfile, type);
		if (uname == username && pword == password) {
			int n = type.length();
			char char_array[n + 1];
			strcpy(char_array, type.c_str());
			for (int i = 0; i < n; i++) {
				userType = char_array[i];
				return userType;
			}
		}
	}

	userfile.close();
	return 'X';
}

void mainMenu(char userType) {
	if (userType == 'S') { //S for sales order executive
		cout << "1) View Purchase Order List" << endl;
		cout << "2) Exit" << endl;
	} else if (userType == 'A') { //A for administrator
		cout << "1) View Purchase Order List" << endl;
		cout << "2) Generate Report" << endl;
		cout << "3) Exit" << endl;
	} else {
		cout << "Error" << endl;
	}
}

void handler(string uname, char userType) {
	int option;
	mainMenu(userType);
	cout << "\nSelect: " << endl;
	cin >> option;
	if (userType == 'S') {
		salesOrderExecutive(uname, userType, option);
	} else if (userType == 'A') {
		administrator(uname, userType, option);
	} else {
		cout << "Error" << endl;
	}
}

#endif /* CONTROLLER_H_ */
