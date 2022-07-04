/*
 * functions.h
 *
 *  Created on: Jul 4, 2022
 *      Author: MacbookPC
 */

#include <iostream>

using namespace std;

struct Order{
	struct Order *previous; // linked list
	int refNo;
	struct Date dateOrdered;
	string phoneNo;
	struct Customer customer;
	string status;
	int itemAmount;
	double totalAmount;
	struct Order* next; // linked list
} *start, *newNode, *previous, *current, *tail; //linked list

struct Order orderDetails[50]; // array

struct Date{
	int dd;
	int mm;
	int yyyy;
};

struct Customer{
	int customerID;
	string customerName;
	string customerAddress;
};

struct Staff{
	int staffID;
	string staffName;
	string staffPost;
	string username;
	string password;
};

struct Report{
	int reportID;
	struct Date reportDate;
	struct Staff reportBy;
};

void orderList(){

}

void reporting(){

}
