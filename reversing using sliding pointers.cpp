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
void reversingSliding(struct Node* p)
{
	struct Node* q=NULL, * r = NULL;
	while (p != NULL) {
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
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
	int A[] = { 2,4,5,6,7 };
	create(A, 5);
	reversingSliding(first);
	Display(first);
}