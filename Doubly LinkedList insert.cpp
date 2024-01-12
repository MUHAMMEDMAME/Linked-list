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
int length() {
	Node* p = first;
	int count = 0;
	while (p != NULL) {
		p = p->next;
		count++;
	}
	return count;
}
void Display(Node* p) {
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
}
void Insert(int pos, int x) {
	if (pos<0 || pos>length())
		return;
	int i;
	struct Node* p = first;
	
	Node* t ;
	
	if (pos == 0) {
		t = new Node;
	 	t->data = x;
		t->prev = NULL;
		t->next = first;
		first->prev = t;
		first = t;
	}
	else {
		t = new Node;
		for (i = 0;i < pos - 1;i++) p = p->next;
		t->data = x;
		t->prev = p;
		t->next = p->next;
		if (p->next)
			p->next->prev = t;
		p->next = t;
	}
}
int main() {
	int A[] = { 10,20,30,40,50 };
	create(A,5);
	cout << "there are :" << length()<<"\n";
	Insert(3, 15);
	Display(first);
}