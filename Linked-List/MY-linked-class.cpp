#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};
class MyLinkedlist
{
public:
    Node *head;
    Node *tail;
    int lenght;

    MyLinkedlist()
    {
        head = tail = NULL;
        lenght = 0;
    }

    void display(Node* head)
    {

        // Node *temp = head;
        // while (temp != NULL)
        // {
        //     cout << temp->val << " "<<endl;
        //     temp = temp->next;
        //     cout << endl;
        // }
        if(head==NULL) return;
        cout<<head->val<<" "<<"->";
        display(head->next);

           
    }
    
    void insertAtTail(int val)    //insert node at tail
    {
        Node* n = new Node(val);
        if (lenght == 0)
            head = tail = n;
        else
        {
            tail->next = n;
            tail = n;
        }
        lenght++;
    }

    void insertHead(int val){   // insert Node at head;
        Node* n=new Node(val);
        if(lenght==0) head=tail=n;
        else{
            n->next=head;
            head=n;
        }
        lenght++;

    }
    void deleteatHead(){ //delte Node at home
        if(lenght==0){
            cout<<"list is Empty"<<endl;
              return;
        }
        else{
            head=head->next;
            lenght--;
        }
    }
};
int main()
{
    MyLinkedlist list;
    // list.insertAtTail(10);
    // list.insertAtTail(20);
    // list.insertAtTail(30);
    // list.insertAtTail(40);
    // list.insertAtTail(50);
    list.insertHead(10);
    list.insertHead(20);
    list.insertHead(30);
    list.insertHead(40);
    list.insertHead(50);
    list.display(list.head);
    list.deleteatHead();
    list.insertHead(60);
    list.display(list.head);
     list.deleteatHead();

   

}