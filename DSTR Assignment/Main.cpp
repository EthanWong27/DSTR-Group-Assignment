/*
 * Main.cpp
 *
 *  Created on: Jul 4, 2022
 *      Author: MacbookPC
 */

#include <iostream>
#include "controller.h"

using namespace std;

int main(){
	string username;
	string password;
	bool success;

	cout << "<--- Purchase Order (PO) Management System --->" << endl;
	cout << "Enter username: " << endl;
	cin >> username;
	cout << "Enter password: " << endl;
	cin >> password;

	success = login(username, password);
}


