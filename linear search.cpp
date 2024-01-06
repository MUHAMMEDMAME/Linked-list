/*#include<iostream>
using namespace std;
struct Node {
	int data;
	struct Node* next;
}*first = NULL;
void create(int A[], int n) {
	int i;
	struct Node* last, * t;
	first = (struct Node*)malloc(sizeof(struct Node));
	first->data = A[0];
	first->next = NULL;
	last = first;
	for (i = 1;i < n;i++) {
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}
void Display(struct Node* p) {
	while (p != NULL) {
		printf("%d", p->data);
		p = p->next;
	}
}
struct Node* search(struct Node* p, int k) {
	while (p != 0) {
		if (k == p->data)
			return p;
		p = p->next;
	}
	return NULL;

}
struct Node* Rsearch(struct Node* p, int k) {
	if (p == NULL)
		 return NULL;

	if (k == p->data)
			return p;
		
    return Rsearch(p->next, k);

	
}
struct Node* Lsearch(struct Node* p,int k) {
	Node* q = NULL;
	while (p != 0) {
		if (p->data == k) {
			q->next = p->next;
			p->next = first;
			first = p;
			return p;

		}
		q = p;
		p = p->next;
	}
	return NULL;
}
int main() {
	struct Node* temp;
	int A[] = { 2,4,6,8,10 };
	create(A, 5);

	temp = Lsearch(first, 10);
	temp = Lsearch(first, 4);

	
	linearSearch = Rsearch(first, 0);
	if (linearSearch)
		cout << "Key is found:" << linearSearch->data;
	else
		cout << "Key isn't found";
	

	Display(first);
}
*/