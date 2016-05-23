#include"func.h"
#include <iostream>

using namespace std;

struct Node {
	int value;
	Node* next = NULL;
};
Node *head = NULL;
void addToEnd(int v)
{
	Node * n;
	if (!head)
	{
		head = new Node;
		head->value = v;
		head->next = NULL;
		return;
	}
	else
	{
		n = head;
		while (n->next)
			n = n->next;
		Node * newNode = new Node;
		newNode->value = v;
		newNode->next = NULL;
		n->next = newNode;
		return;
	}
}

void lab() {
	if (head->next)
	{
		Node *n = head;
		while (n->next->next)
			n = n->next;
		int sum = n->value + n->next->value;
		n->value = sum; n->next->value = sum;
	}
	cout << "В списку не достатньо  елементiв" << endl;

}
void Print() {
	Node *p = head;
	while (p) {
		cout << p->value << endl;
		p = p->next;
	}
}