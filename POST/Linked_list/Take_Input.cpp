#include<iostream>
using namespace std;
#include "Node.cpp"
// /* We will use -1 as the terminator 
//    for the data input, create the head node,

//    In the while loop enter the address of the first node,

//    Link the new node to the previews node (by iterating the Linked list to the last node)
// */


// Node* take_input(){
// int data;
// cin>>data;

// Node *head = NULL;

// while(data != -1){
//     Node *newNode = new Node(data);
//     if(head == NULL){
//         head = newNode;
//     }
//     else{
//         Node * temp = head ;
//         while(temp->next !=NULL){
//             temp = temp->next;
//         }
//         temp ->next = newNode;

//     }
//     cin>>data;
// }
// return head;
// }



// void print_data(Node* head){
//    Node * temp = head;
//    while(temp!= NULL){
//        cout<<temp->data<<" ";
//        temp = temp->next;
//    }
// }



// int main(){
//     Node * head = take_input();

//     print_data(head);
// return 0;
// }




















Node* take_input(){
int data;
cin>>data;

Node *head = NULL;

while(data != -1){
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
    }
    else{
        Node * temp = head ;
        while(temp->next !=NULL){
            temp = temp->next;
        }
        temp ->next = newNode;

    }
    cin>>data;
}
return head;
}





//THE TIME COMPLIXITY :- the time complixity is the   1. while loop to enter the data
//                                                    2. while loop to find the next of the node NULL