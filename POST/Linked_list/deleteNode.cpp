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


void print_data(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }


}


void delete_Node(Node* head,int pos,int data ){
int count=0;
Node* temp = head;
while(count<pos-2){ //there if done the pos-2 to find the perivous node 
    temp = temp->next;
    count++;
}
Node* a = temp->next;  //add the address of the node to be delete
temp->next = temp->next->next; //linking the previous node to the next to next
delete a; //deallocating the node to be delete
}
int main(){
    Node* head = takeInput();
    print_data(head);
    int pos, data;
    cin>>pos>>data;
    delete_Node(head,pos,data);
    print_data(head);

return 0;
}