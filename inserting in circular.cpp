#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
}*Head;

//create node using by circular
void create(int A[], int n) {
	Node* t, * last;
	Head = new Node;
	Head->data = A[0];
	Head->next = Head;
	last = Head;
	for (int i = 1;i < n;i++)
	{
		t = new Node;
		t->data = A[i];
		t->next = last->next;
		last->next = t;
		last = t;
	}
}

//Display
void Display(Node* h) {
	do {
		cout << h->data << " ";
		h = h->next;
	} while (h != Head);
}
//Diplay Recursivly
void RDisplay(Node* h) {
	static int flag = 0;
	if (Head != h || flag == 0) {
		flag = 1;
		cout << h->data << " ";
		RDisplay(h->next);
	}
}

void Insert(int pos, int x) {
	Node* p, * t;
	int i;
	if (pos == 0) {
		t = new Node;
		t->data = x;
		if (Head == NULL) {
			Head = t;
			Head = Head->next;
		}
		else {
			p = Head;
		
			while (p->next != Head) 	p = p->next;
			p->next = t;
			t->next = Head;
			Head =t ;
		}

	}
	else {
		t = new Node;
		p = Head;
		for (i = 0;i < pos - 1;i++) p = p->next;

		t->data = x;
		t->next = p->next;
		p->next = t;

	}
}
int main() {
	int A[] = { 1,2,3,4,5 };
	create(A, 5);
	Insert(0, 5);
	Display(Head);
}