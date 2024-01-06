#include<iostream>
using namespace std;
struct Node {
	int data;
	struct Node* next;
}*first = NULL;


void create(int A[], int n) {
	struct Node* t, * last;
	first = new Node;
	first->data = A[0];
	first->next = NULL;
	last = first;
	for (int i = 1;i < n;i++) {
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}


void Reversing(struct Node* q, struct Node* p) {
	if (p != NULL) {
		Reversing(p, p->next);
		p->next = q;
	}
	else
		first = q;
}



void Display(struct Node* p) {
	while (p != 0)
	{
		cout << p->data << " ";
		p = p->next;
	}
}
int main() {
	struct Node* q = NULL;
	int A[] = { 2,4,5,6,7 };
	create(A, 5);
	Reversing(q, first);
	Display(first);
}