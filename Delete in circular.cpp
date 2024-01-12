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

//How ManyNode you Have
int Length() {
	int length = 0;
	Node* p = Head;
	do {
		length++;
		p = p->next;
	} while (p != Head);
	return length;
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

int Delete(int pos) {
	if (pos<0 || pos>Length())
		return -1;
	Node* p,*q;
	int i;
	int x=0;

	if (pos == 1) {
		p = Head;
		while (p->next != Head) p = p->next;
		x = Head->data;
		if (Head == NULL) {
			delete Head;
			Head = NULL;
		}
		else
		{
			p->next = Head->next;
			delete Head;
			Head = p->next;
		}
	}
	else {
		p = Head;
		q = (Node *) malloc(sizeof(Node));
		for (i = 0;i < pos - 2;i++)  p = p->next;
		q = p->next;
		p->next = q->next;
		x = q->data;
		delete q;
	}
	return x;
}


int main() {
	int A[] = { 1,2,3,4,5 };
	create(A, 5);
	cout<<Delete(6)<<"\n";
	Display(Head);
}
