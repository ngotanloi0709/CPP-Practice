#ifndef list_h
#define list_h
#include <iostream>

using namespace std;
struct date {
	int day;
	int month;
	int year;
};

void printDate(date staffBirthday);

struct staff {
	string id;
	string name;
	date birthday;
	double salary;
	bool gender; // 0 == female || 1 == male
};

void printStaff(staff staffAlias);

struct NODE {
	staff data;
	NODE* next;
};

struct LINKEDLIST {
	NODE* head;
	NODE* tail;
};

void printList(LINKEDLIST& list);

NODE* createNode(staff data);

void createList(LINKEDLIST& list);

void addNodeAtHead(LINKEDLIST& list, NODE* node);

void staffHaveBirthdayLessThan1980(LINKEDLIST& list);

void countStaffHaveSalaryGreaterThan10Million(LINKEDLIST& list);

void removeStaffHaveId(LINKEDLIST& list, string id);

void decreasingSortForYear(LINKEDLIST& list);
#endif
