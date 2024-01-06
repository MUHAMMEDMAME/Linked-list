/*#include<iostream>
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
struct Node* search(struct Node* p, int k) {
	if (p == 0)
		return NULL;
	while (p != 0) {
		if (p->data == k)
			return p;
		p = p->next;
	}
}
struct Node* Rsearch(struct Node* p, int k) {
	if (p == 0)
		return NULL;
	if (p->data == k)
		return p;
	Rsearch(p->next, k);

}
void Display(struct Node* p) {
	while (p != NULL) {
		cout << p->data;
		p = p->next;
	}
}
void Insert(struct Node* p, int index, int x) {
	struct Node* t = new Node;
	t->data = x;
	if (index == 0)
	{
		t->next = first;
		first = t;
	}
	else {
		for (int i = 0;i < index - 1 && p;i++)
			p = p->next;
		t->next = p->next;
		p->next = t;
	}

}
void insertLast(int x) {
	struct Node* t = new Node;
	t->data = x;
	t->next = NULL;
	if (first == NULL)
	{
		first = t;
	}
	else
	{
		struct Node* last = new Node;
		last = first;
		while (last != 0) {
			last->next = last;
		}
		last->next = t;
		t->next = NULL;
	}
}

void sortedInsert(struct Node* p, int x) {
	struct Node* t = new Node;
	t->data = x;
	t->next = NULL;
	if (first == NULL) {
		first = t;
	}
	else {
		struct Node* q = NULL;
		while (p && p->data < x) {
			q = p;
			p = p->next;
		}
		if (p == first) {
			t->next = first;
			first = t;
		}
		else
		{
			t->next = q->next;
			q->next = t;
		}
	}
}
int main() {
	int A[] = { 2,4,6,8,10 };
	//create(A, 5);
	/*
	struct Node* lsearch;
	lsearch = Rsearch(first, 4);
	if (lsearch)
		cout << "key is found " << lsearch->data;
	else
		cout << "key isn't found";
	
	sortedInsert(first, 5);
	sortedInsert(first, 3);

	Display(first);
}
*/