#include <iostream>
#include "list.h"
using namespace std;

void printDate(date staffBirthday) {
	cout << staffBirthday.day << "/" << staffBirthday.month << "/" << staffBirthday.year;
}

void printStaff(staff staffAlias) {
	cout << staffAlias.id << '\t';
	cout << staffAlias.name << '\t';
	printDate(staffAlias.birthday); cout << '\t';
	cout << fixed << staffAlias.salary - 0 << '\t';
	cout << '\t' <<(staffAlias.gender)? "Nam" : "Nu";
	cout << endl;
}

void printList(LINKEDLIST& list) {
	NODE* node = list.head;
	while (node != NULL) {
		cout << node->data.name << " " << endl;
		node = node->next;
	}
	cout << endl;
}

NODE* createNode(staff staffAlias) {
	NODE* node = new NODE;
	node->data = staffAlias;
	node->next = NULL;
	return node;
}

void createList(LINKEDLIST& list) {
	list.head = NULL;
	list.tail = NULL;
}

void addNodeAtHead(LINKEDLIST& list, NODE* node) {
	if (list.head == NULL) {
		list.head = node;
		list.tail = node;
	} else {
		node->next = list.head;
		list.head = node;
	}
}

void staffHaveBirthdayLessThan1980(LINKEDLIST& list) {
	NODE* node = list.head;
	while (node != NULL) {
		if (node->data.birthday.year <= 1980) cout << node->data.name << endl;
		node = node->next;
	}
	cout << endl;
}

void countStaffHaveSalaryGreaterThan10Million(LINKEDLIST& list) {
	NODE* node = list.head;
	while (node != NULL) {
		if (node->data.salary >= 10000000) cout << node->data.name << endl;
		node = node->next;
	}
	cout << endl;
}

void removeStaffHaveId(LINKEDLIST& list, string id) {
	NODE* node = list.head;
	NODE* tempNode = list.head;
	while (node != NULL) {
		if (node->data.id == id) {
			cout << "> Con lai" << endl;
			if (node == list.head) {
				list.head = node->next;
				delete node;	
				break;
			} 
			else if (node == list.tail) {
				while (tempNode != NULL) {
					if (tempNode->next == node) break;
					tempNode = tempNode->next;
				}
				tempNode->next = NULL;
				list.tail = tempNode;
				delete node;
				break;
			} else {
				NODE* tempNode = list.head;
				while (tempNode != NULL) {
					if (tempNode->next == node) break;
					tempNode = tempNode->next;
				}
				tempNode->next = node->next;
				delete node;
				break;
			}
		}
		node = node->next;
	}
}

void swap(NODE* x, NODE* y) {
	if (x != y) {
		NODE temp = *x;
		x->data = y->data;
		y->data = temp.data;
	}
}

void decreasingSortForYear(LINKEDLIST& list) {
	NODE* max;
	NODE* node = list.head;
	NODE* afterNode;
	while (node != list.tail) {
		max = node;
		afterNode = node->next;
		
		while (afterNode != NULL) {
			if (afterNode->data.birthday.year > max->data.birthday.year) max = afterNode;
			afterNode = afterNode->next;
		}
		
		swap(node, max);
		
		node = node->next;
	}
}
