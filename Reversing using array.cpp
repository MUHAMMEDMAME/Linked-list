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

void Display(struct Node* p) {
	while (p != NULL) {
		cout << p->data<<" ";
		p = p->next;
	}
}

void reversing(struct Node* p, int size) {
	int i = 0;
	int *ptr=new int [size];
	while (p != NULL) {
		ptr[i] = p->data;
		p = p->next;
		i++;
	}
	p = first, i--;
	while (p != NULL) {
		p->data = ptr[i];
		p = p->next;
		i--;
	}
}


int main() {
	int A[] = { 1,5,5,4,8,8 };
	create(A, 6);
	reversing(first,6);
	Display(first);


}
