#include <iostream>
#include <string>
#include "list.h"
using namespace std;

int main() {
	LINKEDLIST list;
	createList(list);//tao lap danh sach lien ket
	
	staff staff_1 {
		"001",
		"1Tan Loi",
		date{7, 9, 1980},
		20000000,
		1
	};
	staff staff_2 {
		"002",
		"2Nguyen Van A",
		date{1, 2, 1979},
		9000000,
		0
	};
	staff staff_3 {
		"003",
		"3Cai Bang",
		date{15, 5, 2003},
		10000000,
		0
	};
	//tao lap thong tin 2 staff
	NODE* node = createNode(staff_1);//them 2 staff tren vao danh sach lien ket
	addNodeAtHead(list, node);
	node = createNode(staff_2);
	addNodeAtHead(list, node);
	node = createNode(staff_3);
	addNodeAtHead(list, node);
	
	printStaff(staff_1);//in ra 2 nhan vien vi du
	printStaff(staff_2);
	printStaff(staff_3);
	cout << endl;//in ra 2 nhan vien vi du
	
	cout << "> List Check" << endl;
	printList(list);
	
//	cout << "> Nhung nguoi sinh truoc nam 1980:" << endl;
//	staffHaveBirthdayLessThan1980(list);//print ra nhung nguoi sinh truoc 1980
//	cout << "> Nhung nguoi co luong lon hon 10 trieu:" << endl;
//	countStaffHaveSalaryGreaterThan10Million(list);//print ra nhung nguoi co luong hon 10 trieu
//	cout << "> Xoa nhan vien co ma so 001" << endl;
//	removeStaffHaveId(list, "001");//3 option 001 002 003
//	printList(list);
	cout << "> Sap xep theo nam sinh giam dan:" << endl;// chu y cach bieu dien cua linkedlist tren man hinh. cai nao xuat hien truoc la o dau danh sach
	decreasingSortForYear(list);
	printList(list);
	
	return 0;
}
