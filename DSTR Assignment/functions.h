/*
 * functions.h
 *
 *  Created on: Jul 4, 2022
 *      Author: MacbookPC
 */

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Date {
	int dd;
	int mm;
	int yyyy;
};

struct Customer {
	int customerID;
	string customerName;
	string customerAddress;
};

struct Staff {
	int staffID;
	string staffName;
	string staffPost;
};

struct Order {
	struct Order *next;
	struct Order *previous;
	int refNo;
	struct Date dateOrdered;
	string phoneNo;
	struct Customer customer;
	string status;
	int itemAmount;
	double totalAmount;
};

struct Report {
	struct Order orders;
	struct Date reportDate;
	struct Staff reportBy;
};
struct Report reportDetails[50];

struct DoublyLinkedList {
	Order *head;
	Order *tail;
	int size;
	DoublyLinkedList() {
		cout << "<--- Creating Doubly Linked List --->" << endl;
		this->size = 0;
		this->head = nullptr;
		this->tail = nullptr;
	}
	void beginningInsert(int refNo, Date dateOrdered, string phoneNo,
			string status, int itemAmount, double totalAmount) {
		cout << "Inserting Order" << endl;
		Order *newNode = new Order;
		newNode->refNo = refNo;
		newNode->dateOrdered = dateOrdered;
		newNode->phoneNo = phoneNo;
		newNode->status = status;
		newNode->itemAmount = itemAmount;
		newNode->totalAmount = totalAmount;
		newNode->next = nullptr;
		head = newNode;
		if (tail == nullptr) {
			tail = newNode;
		} else {
			newNode->next->previous = newNode;
		}
		size++;
	}

	void endInsert(int refNo, Date dateOrdered, string phoneNo, string status,
			int itemAmount, double totalAmount) {
		cout << "Inserting Order" << endl;
		Order *newNode = new Order;
		newNode->refNo = refNo;
		newNode->dateOrdered = dateOrdered;
		newNode->phoneNo = phoneNo;
		newNode->status = status;
		newNode->itemAmount = itemAmount;
		newNode->totalAmount = totalAmount;
		newNode->next = nullptr;
		newNode->previous = tail;
		tail = newNode;
		if (head == nullptr) {
			head = newNode;
		} else {
			newNode->previous->next = newNode;
		}
		size++;
	}

	int getSize() {
		return size;
	}

	void showForward() {
		Order *curr = head;
		cout << "\n<--- Display Order details in forward order = " << size
				<< " elements --->" << endl;
		while (curr != nullptr) {
			cout << curr->refNo << "|" << curr->dateOrdered << "|"
					<< curr->phoneNo << "|" << curr->status << "|"
					<< curr->itemAmount << "|" << curr->totalAmount << "|"
					<< endl;
			curr = curr->next;
		}
	}

	void showBackward() {
		Order *curr = tail;
		cout << "\n<--- Display Order details in backward order = " << size
				<< " elements --->" << endl;
		while (curr != nullptr) {
			cout << curr->refNo << "|" << curr->dateOrdered << "|"
					<< curr->phoneNo << "|" << curr->status << "|"
					<< curr->itemAmount << "|" << curr->totalAmount << "|"
					<< endl;
			curr = curr->previous;
		}
	}
};
