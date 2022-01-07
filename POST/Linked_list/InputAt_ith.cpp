#include<iostream>
using namespace std;
#include "Node.cpp"

Node* takeInput(){
    int data;
    cin>>data;
    Node* head = NULL;
    Node* tail = NULL;    //we have taken a tail node which will only change every time to store the address of the next node


    while(data!= -1){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            //both are in pointing the first node 
        } 
        else
        {
              tail->next = newNode; //now the next node address is in the tail->next
              tail = tail->next;
        }
    cin>>data;
    }
    return head;

}

Node* Insert(Node* head,int i,int data){
    Node* newNode = new Node(data);
    Node* temp = head;
    int count= 0;
    if(i ==0){
        newNode->next = head; //this when the pos is 0 index
        head = newNode;
        return head ;
    }
  while(temp != NULL && count<i-1){    //if we add the = sign then the address it will point will be next one
    temp = temp->next;
    count++;
  }
  if(temp!= NULL){ //this condition is to get rid of the segmentation fault 
  Node* a = temp->next;
  temp->next = newNode;
  newNode->next = a;
  }
}

void print_data(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        cout<<endl;
    }
}
int main(){
    Node* head = takeInput();
    print_data(head);
    int  data, pos;
    cin>>data>>pos;
    head = Insert(head,pos,data);
    print_data(head);
    
return 0;
}