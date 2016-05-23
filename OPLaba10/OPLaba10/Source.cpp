#include<iostream>
#include<conio.h>
#include"func.h"
using namespace std;

//struct Node {
//	int value;
//	Node* next = NULL;
//};
//Node *head = NULL;
//void addToEnd(int v)
//{
//	Node * n;
//	if (!head)
//	{
//		head = new Node;
//		head->value = v;
//		head->next = NULL;
//		return;
//	}
//	else
//	{
//		n = head;
//		while (n->next)
//			n = n->next;
//		Node * newNode = new Node;
//		newNode->value = v;
//		newNode->next = NULL;
//		n->next = newNode;
//		return;
//	}
//}
//
//void lab() {
//	if (head->next)
//	{
//		Node *n = head;
//		while (n->next->next)
//			n = n->next;
//		int sum = n->value + n->next->value;
//		n->value = sum; n->next->value = sum;
//	}
//	cout << "В списку не достатньо  елементiв" << endl;
//	
//}
//void Print(){
//	Node *p = head;
//	while (p){
//		cout << p->value << endl;
//		p = p->next;
//	}
//}

void main() {
	setlocale(LC_ALL, "rus");
	int n;
	char choise = 0;
	while(choise !='9'){
		system("cls");
		cout << "1)Добавити\n2)Вивiд\n3)Лаба" << endl;
		cout << "Зробiть свiй вибiр" << endl;
		choise = _getch();
		switch (choise)
		{
		case'1':
			cout << "Введiть число:" << endl;
			cin >> n;
			addToEnd(n);
			break;
		case'2':Print();
			_getch();
			break;
		case'3':lab();
			break;
		}
	}
}