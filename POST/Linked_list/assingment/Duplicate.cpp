#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
       this->data = data;
       next = NULL;
    }
};

Node* TakeInput(){
    int data;
    cin>>data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data !=-1){
        Node* newNode = new Node(data);
        if(head ==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

void print_data(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}




void duplicate(Node* head){
    Node* t1 = head;
    Node* t2 = head->next;


   while(t2!=NULL){
       if (t1->data == t2->data){
           Node* temp = t2;
           t2 = t2->next;
           delete temp;
       }else{
             t1->next = t2;
             t1 = t1->next;
             t2 = t2->next;
       }
   } 
   t1->next = t2;
 
 return;
}
int main(){
   Node* head = TakeInput();
    duplicate(head);
    print_data(head);
return 0;
}