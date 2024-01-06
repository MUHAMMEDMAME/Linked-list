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
int Delete(int pos) {
	struct Node* p, * q;
	int x = 0,i;
	if (pos == 1) {
		p = first;
		x = p->data;
		first = first->next;
		delete p;
	}
	else {
		p = first;
		q = NULL;
		for (i = 0;i < pos - 1;i++) {
			q = p;
			p = p->next;
		}
		if (p) {

		x = p->data;
		q->next = p->next;
		delete p;
		}
	}
	return x;
}
void Display(struct Node* p) {
	while (p != 0)
	{
		cout << p->data << " ";
		p = p->next;
	}
}
int main() {
	int A[] = { 2,4,5,6,7 };
	create(A, 5);
	cout << Delete(3)<<endl;
	Display(first);
}