#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    
    Node(int val){
        this->val=val;
        next=NULL;
    }

};
class MYlinklistclass{
    public:

    Node* head;
    Node* tail;
    int lenght;

    MYlinklistclass(){
        head=tail=NULL;
        lenght=0;
        
    }
    

     void display(Node* head){
        if(head==NULL) return;
        cout<<head->val<<" "<<"->";
        display(head->next);
   
    }
    

    void InsertAttail(int val){
        Node* n=new Node(val);
        if(lenght==0) head=tail=n;

        else{
          tail->next=n;
          tail=n;

        }
        lenght++;

        cout<<endl;
        

    }

    void InsertAtHead(int val){
        Node* n=new Node(val);
        if(lenght==0) head=tail=n;
        
        else{
            n->next=head;
            head=n;

        }
        lenght++;
       
    
        
    }
    void InsertAtIdx(){

    }

};
int main(){
    MYlinklistclass list;
    list.InsertAtHead(10);    
    list.InsertAtHead(20);    
    list.InsertAtHead(30);    
    list.InsertAtHead(40);    
    list.InsertAtHead(50);    
    list.InsertAtHead(60);    
    list.display(list.head);
     list.InsertAttail(5);
     list.display(list.head);

}