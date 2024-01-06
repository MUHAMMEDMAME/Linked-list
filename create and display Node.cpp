#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
struct Node {
	int data;
	struct Node* next;
}*first=NULL;

void create(int A[], int n) {
	struct Node* t, * last;
	first = new Node;
	first->data = A[0];
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
		while (p != 0)
		{
			cout << p->data;
			p = p->next;

		}
	}

int main() {
	int A[] = { 1,2,3,4,5 };
	create(A, 5);
	Display(first);

}