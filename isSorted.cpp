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
		cout << p->data;
		p = p->next;
	}
}
bool isSorted(struct Node* p) {
	int x = INT_MIN;
	while (p != NULL) {
		if (x > p->data)
			return false;
		x = p->data;
		p = p->next;
	}
	return true;
}


int main() {
	int A[] = { 1,2,3,4,5 };
	create(A, 5);
	if (isSorted(first))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}
