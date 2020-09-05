#include <iostream>

using namespace std;

struct node {
	int x;
	node* prev, * next;
};

class List {
private:
	node* Head, * Tail;
	int count;
public:
	List(){
		Head=nullptr;
		Tail=nullptr;
	}
	~List() {
		while (Head) {
			Tail = Head->next;
			delete Head;
			Head = Tail;
		}
	}

	void Add(int x) {
		node* temp = new node;
		temp->next = NULL;
		temp->x = x;
		temp->prev = Tail;

		if (Tail != 0)
			Tail->next = temp;

		if (count == 0)
			Head = Tail = temp;
		else
			Tail = temp;

		count++;
	}

	void Show()
	{
		node* temp;
		temp = Head;

		while (temp != NULL)
		{
			cout << temp->x << " ";
			temp = temp->next;
		}

		cout << "\n";
	}

	void _delete(int x) {
		try {
			if (x<1 || x>count) {
				throw "ERR: Element not founded";
			}

			node* DEL = Head;

			for (int i = 1; i < x; i++) {
				DEL = DEL->next;
			}

			node* DEL_Next = DEL->next;
			node* DEL_Prev = DEL->prev;

			if (DEL_Prev != 0 && count != 1) {
				DEL_Prev->next = DEL_Next;
			}

			if (DEL_Next != 0 && count != 1) {
				DEL_Next->prev = DEL_Prev;
			}

			delete DEL;

			count--;
		}
		catch (char** s) {
			cerr << "ERR: Element not founded";
		}
	}
};

int main()
{
	List first;
	first.Add(100);
	first.Add(200);
	first.Add(300);
	first.Add(400);
	first.Add(500);

	first._delete(3);

	first.Show();
}
