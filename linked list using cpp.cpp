/*#include<iostream>
using namespace std;
class Node {
private:
	int data;
	class Node* next;
public:
	void create(int A[], int n) {
		int i;
		class Node* t, * last;
		first = new Node;
		first->data = A[0];
		first->next = NULL;
		last = first;
		for (i = 1;i < n;i++) {
			t = new Node;
			t->data = A[i];
			t->next = NULL;
			last->next = t;
			last = t;
		}
	}
	void Display() {
		while (first != NULL) {
			cout << first->data;
			first = first->next;
		}
	}
	int count() {
		int c = 0;
		while (first != 0)
		{
			c++;
			first = first->next;
		}
		return c;
}

}*first=NULL;
int main() {
	int A[] = { 2,4,5,6,7 };
	first->create(A, 5);
	//first->Display();
	cout << "there are :" << first->count() << endl;
}
*/