#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
class LinkedList {
private:
	Node* first;
public:
	LinkedList();
	LinkedList(int A[], int n);
	
	void Display();

};
LinkedList::LinkedList() {
	first = NULL;
}
LinkedList::LinkedList(int A[], int n)
{
	first = new Node;
	Node* t, * last;
	first->data = A[0];
	first->next = NULL;
	last = first;
	for (int i = 1;i < n;i++) {
		t = new Node;
		t->data = A[i];
		last->next = t;
		t->next = NULL;
		last = t;
	}
}
void LinkedList::Display(){
	Node* p = first;
	while (p!=NULL) {
		cout << p->data << " ";
		p = p->next;
}

}


int main() {
	int A[] = { 1,2,3,4,5 };

	LinkedList l(A,5);
	
	l.Display();
	
}