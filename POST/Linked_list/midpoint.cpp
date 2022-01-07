#include<iostream>
using namespace std;
class Node{
    public :
          int data;
          Node* next;
          Node (int data){
              this->data = data;
              next =NULL;
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


void midpoint(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast->next !=NULL && fast!= NULL){ //this is for  both even & odd numbers
        slow = slow->next;
        fast = fast->next->next;

    }
    cout<<slow->data;
   
}

int main(){
   Node* head = TakeInput();
//    int result = 0;
   midpoint(head);
//    cout<<result<<endl;
return 0;
}