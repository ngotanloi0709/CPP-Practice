//LinkedList Demo
//https://khiemle.dev/danh-sach-lien-ket-don-trong-cpp/#Danh_sach_lien_ket_don_la_gi

#include <iostream>
using namespace std;

struct NODE { //tao kieu du lieu cua mot NODE bao gom data va con tro tro den o tiep theo(NODE* next;) trong do next thuoc kieu du lieu NODE tuong trung cho vi tri tiep theo gom ca data va next
	int data;
	NODE* next;
};

struct LINKEDLIST { //tao kieu du lieu linkedlist bao gom dau va duoi
	NODE* head;//con tro tro vao node dau va duoi cua dslk de kiem soat no
	NODE* tail;
};
//////////////////////////////////////////////////////////////////////////////////////////
void printList(LINKEDLIST list) {
	if (list.head == NULL) cout << "------> Khong co phan tu nao ton tai trong danh sach!!!";
	else {
		cout << "------> ";
		NODE* node = list.head;
		while (node != NULL) {
			cout << node->data << " ";
			node = node->next;
		}
	}
}
//////////////////////////////////////////////////////////////////////////////////////////
NODE* createNode(int inputValue) {//con tro ham tra ve dia chi 
	NODE* node = new NODE;// tao node moi(NODE* node) voi phan o nho duoc cap phat la bang gia tri cua kieu du lieu NODE
	
	node->data = inputValue;
	node->next = NULL;//node vua tao chua lien ket voi phan tu nao nen gan voi null
	
	return node; //tra ve dia chi cua node vua tao
}

NODE* getNode(LINKEDLIST& list, int input) {
	NODE* node = list.head;
	while (node != NULL) {
		if (node->data == input) return node;
		node = node->next;
	}
}

bool nodeValueExistCheck(LINKEDLIST& list, int input) {
	NODE* tempNode = list.head;
	while (tempNode != NULL) {
		if (tempNode->data == input) return true;
		tempNode = tempNode->next;
	}
	return false;
}

void createList(LINKEDLIST& list) {
	list.head = NULL;//gan head va tail cua list = null
	list.tail = NULL;
}

bool nullCheck(LINKEDLIST& list) {
	if (list.head == NULL) return true;
	return false;
}
//////////////////////////////////////////////////////////////////////////////////////////
void addNodeAtHead(LINKEDLIST& list, NODE* node) {
	if (list.head == NULL) {
		list.head = node;
		list.tail = node;
	} else {
		node->next = list.head;
		list.head = node;
	}
	cout << endl << "> Danh sach moi sau khi them " << node->data << ": " << endl;
	printList(list);
}

void addNodeAtTail(LINKEDLIST& list, NODE* node) {
	if (list.head == NULL) {
		list.head = node;
		list.tail = node;
	} else {
		list.tail->next = node;
		list.tail = node;
	}
	cout << endl << "> Danh sach moi sau khi them " << node->data << ": " << endl;
	printList(list);
}

void addNodeAtMid(LINKEDLIST& list, NODE* x, NODE* y) {
	if (x != NULL) {
		y->next = x->next;
		x->next = y;
		if (list.tail == x) list.tail = y;
	} else addNodeAtHead(list, y);
	cout << endl << "> Danh sach moi sau khi them " << y->data << ": " << endl;
	printList(list);
}
//////////////////////////////////////////////////////////////////////////////////////////
void removeNodeAtHead(LINKEDLIST& list) {
	if (list.head != NULL) {
		NODE* node = list.head;
		list.head = node->next;
		delete node;
		cout << endl << "> Danh sach moi sau khi xoa phan tu dau danh sach: " << endl;
		printList(list);
	} else {
		cout << "> Danh sach rong! Khong ton tai phan tu de xoa!!!";
	}
}

void removeNodeAtTail(LINKEDLIST& list) {
	if (list.head != NULL) {
		NODE* node = list.tail;
		NODE* tempNode = list.head;
		while (node != NULL) {
			if (tempNode->next == node) break;
			tempNode = tempNode->next;
		}
		tempNode->next = NULL;
		list.tail = tempNode;
		delete node;
		cout << endl << "> Danh sach moi sau khi xoa phan tu cuoi danh sach: " << endl;
		printList(list);
	} else {
		cout << "> Danh sach rong! Khong ton tai phan tu de xoa!!!";
	}
}

void removeNodeAtMid(LINKEDLIST& list, NODE* node) {
	if (list.head != NULL) {
		if (node == list.head) removeNodeAtHead(list);
		else if (node == list.tail) removeNodeAtTail(list);
		else {
			NODE* previousNode = list.head;
			while (node != NULL) {
				if (previousNode->next == node) break;
				previousNode = previousNode->next;
			}
			previousNode->next = node->next;
			cout << endl << "> Danh sach moi sau khi xoa phan tu " << node->data << ": " << endl;
			printList(list);
			delete node;
		}
	} else {
		cout << "> Danh sach rong! Khong ton tai phan tu de xoa!!!";
	}
}
///////////////////////////////////////////////////////////////////////////////////////////
void searchNodePosition(LINKEDLIST& list, int input) {
	int count = 0;
	int exist = nodeValueExistCheck(list, input);
	if (exist == false) cout << endl << "> Khong tim thay phan tu";
	else {
		NODE* node = list.head;
		while (node != NULL) {
			count++;
			if (node->data == input) break;
			node = node->next;
		}	
		cout << endl << "> Phan tu nam o vi tri thu " << count;
	}
}

int listLength(LINKEDLIST& list) {
	int count = 0;
	NODE* node = list.head;
	while (node != NULL) {
		count ++;
		node = node-> next;
	}
	return count;
}

void nodeValueAtN(LINKEDLIST& list, int n) {
	int count = 0;
	NODE* node = list.head;
	while (node != NULL) {
		count ++;
		if (count == n) {
			cout << endl <<"> Gia tri tai phan tu " << n << " la: " << node->data;
			break;
		}
		node = node->next;
	}
}

void destroyList(LINKEDLIST& list) {
	while (list.head != NULL) {
		if (list.head != NULL) {//removeAtHead
			NODE* node = list.head;
			list.head = node->next;
			delete node;
		}
	}
	if (nullCheck(list) == true) cout << "> Da xoa danh sach";
}
///////////////////////////////////////////////////////////////////////////////////////////
int main() {
	LINKEDLIST list;
	createList(list);
	
	NODE* node;
	for (int i = 1; i <= 10; i++) {
		node = createNode(i);
		addNodeAtTail(list, node);
	}
	
	int choice = 1;
	do {
		system("cls");
		cout << "> Danh sach lien ket don tu 1 den 10:" << endl;
		printList(list);
		cout << endl << endl;
		cout << "> 1. Them phan tu." << endl;
		cout << "> 2. Xoa phan tu." << endl;
		cout << "> 3. Tim kiem phan tu." << endl;
		cout << "> 4. Dem so phan tu." << endl;
		cout << "> 5. Lay gia tri cua phan tu thu n." << endl;
		cout << "> 6. Huy danh sach." << endl << endl;
		if (choice < 1 || choice > 6) cout << endl << "> Chon sai! Vui long chon lai!";
		cout << "> Nhap lua chon cua ban: "; cin >> choice;
		cout << endl << endl;
	} while (choice < 1 || choice > 6);
	
	switch (choice) {
		case 1: {//add
			int inChoice = 1;
			do {
				system("cls");
				cout << "> Danh sach lien ket don tu 1 den 10:" << endl;
				printList(list);
				cout << endl << endl;
				cout << "1. Them phan tu vao dau danh sach." << endl;
				cout << "2. Them phan tu vao cuoi danh sach." << endl;
				cout << "3. Them phan tu vao giua danh sach." << endl << endl;
				if (inChoice < 1 || inChoice > 3) cout << endl << "> Chon sai! Vui long chon lai!";
				cout << "> Nhap lua chon cua ban: "; cin >> inChoice;
				cout << endl;
			} while (inChoice < 1 || inChoice > 3);
			
			int input;
			if (inChoice == 1) {
				cout << "> Nhap gia tri muon them vao danh sach: "; cin >> input;
				cout << endl;
				NODE* newNode = createNode(input);
				addNodeAtHead(list, newNode);
			} else if (inChoice == 2) {
				cout << "> Nhap gia tri muon them vao danh sach: "; cin >> input;
				cout << endl;
				NODE* newNode = createNode(input);
				addNodeAtTail(list, newNode);
			} else if (inChoice == 3) {
				int previousValue;
				cout << "> Nhap gia tri muon them vao danh sach: "; cin >> input;
				cout << endl << "> Ban muon them gia tri nay sau chu so nao: "; cin >> previousValue;
				cout << endl;
				int existCheck = nodeValueExistCheck(list, previousValue);
				if (existCheck == false) cout << "> Khong tim thay chu so ban vua nhap!!!";
				else {
					NODE* newNode = createNode(input);
					NODE* previousNode = getNode(list, previousValue);
					addNodeAtMid(list, previousNode, newNode);
				}
			}
			break;
		}
		case 2: {//remove
			int inChoice = 1;
			do {
				system("cls");
				cout << "> Danh sach lien ket don tu 1 den 10:" << endl;
				printList(list);
				cout << endl << endl;
				cout << "1. Xoa phan tu o dau danh sach." << endl;
				cout << "2. Xoa phan tu o cuoi danh sach." << endl;
				cout << "3. Xoa phan tu o giua danh sach." << endl << endl;
				if (inChoice < 1 || inChoice > 3) cout << endl << "> Chon sai! Vui long chon lai!";
				cout << "> Nhap lua chon cua ban: "; cin >> inChoice;
				cout << endl;
			} while (inChoice < 1 || inChoice > 3);
			
			int input;
			if (inChoice == 1) {
				removeNodeAtHead(list);
			} else if (inChoice == 2) {
				removeNodeAtTail(list);
			} else if (inChoice == 3) {
				cout << "> Nhap phan tu ban muon xoa: "; cin >> input;
				int existCheck = nodeValueExistCheck(list, input); 
				if (existCheck == false) cout << endl << "> Khong tim thay phan tu ban can xoa!!!";
				else {
					NODE* removeNode = getNode(list, input);
					removeNodeAtMid(list, removeNode);
				}
				
			}
			break;
		}
		case 3: {//search
			int input;
			cout << "> Nhap so ban can tim kiem: "; cin >> input;
			searchNodePosition(list, input);
			break;
		}
		case 4: {//lengthCheck
			int length = listLength(list);
			cout << "> Chieu dai cua danh sach nay la : " << length;
			break;
		}
		case 5: {//Value at n(position
			
			int n;
			cout << "> Nhap vi tri ban muon lay gia tri: "; cin >> n;
			if (n < 1 || n >  listLength(list)) cout << endl << "> Khong co gia tri nao o vi tri ban vua nhap!!!";
			else nodeValueAtN(list, n);
			break;
		}
		case 6: {//destroyList
			destroyList(list);
			break;
		}
	}	
	return 0;
}

