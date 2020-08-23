#include <iostream>

using namespace std;

struct node {
    int x;
    node *prev, *next;
};

class List {
private:
    node *Head, *Tail;
public:
    List() :Head(NULL), Tail(NULL) {}
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

        if (Head != NULL)                
        {
            temp->prev = Tail;           
            Tail->next = temp;           
            Tail = temp;                 
        }
        else                             
        {
            temp->prev = NULL;           
            Head = Tail = temp;          
        }
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
        node* temp;
        temp = Head;

        while (temp->x != x) {
            temp = temp->next;
        }

        temp->next = Tail;
        
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

    first._delete(300);

    first.Show();
}