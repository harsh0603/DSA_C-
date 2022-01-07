#include<iostream>
using namespace std;
#include "Node.cpp"




// int main(){
//     //statically creating Node 
// Node n1(12);
// Node *head = &n1; //This is the head Node 
// Node n2(45);

// n1.next = &n2; //Connecting the Node of the Linked list
// Node * temp = head;
// while(temp != NULL){
//     cout <<temp->data<<" ";
//     temp = temp->next;
// }
// return 0;
// }



//Dynamically allocating

void print_data(Node* head){
Node* temp = head;

while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}

}


int main(){

    Node *n1 = new Node(24); //dynamically allocating the node 
    Node *head = n1;     //head node 
    Node *n2 = new Node(45);
    Node *n3 = new Node(12);

    n1->next = n2; //linked the node 
    n2->next = n3;

    print_data(head);
    return 0;
}


