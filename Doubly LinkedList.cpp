#include<iostream>
using namespace std;
struct Node {
	Node* prev;
	int data;
	Node* next;
} *first=NULL;
void create(int A[], int n) {
	first = new Node;
	struct Node* t, * last;
	first->prev = first->next = NULL;
	first->data = A[0]; 
	last = first;
	for (int i = 1;i < n;i++) {
		t = new Node;
		t->data = A[i];
		t->next = last->next;
		last->next = t;
		last = t;
	}
}
void Display(Node* p) {
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
}
int main() {
	int A[] = { 10,20,30,40,50 };
	create(A,5);
	Display(first);
}