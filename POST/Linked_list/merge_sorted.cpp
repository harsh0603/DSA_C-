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

Node* merge(Node* h1,Node* h2){
    Node* hf = NULL;
    Node* tf = NULL;
    if(h1->data < h2->data){
          hf = h1;
          tf = h1;
          h1 = h1->next;
    }else{
       hf = h2;
       tf = h2;
       h2 = h2->next;
    }

    while(h1!= NULL && h2!= NULL){
        if(h1->data < h2->data){
            tf->next = h1;
            tf = tf->next;
            h1 = h1->next;
        }else if (h2->data < h1->data){
            tf->next = h2;
            tf = tf->next;
            h2 = h2->next;
        }
    }

    if (h1!= NULL){
        tf->next = h1;
    }else if(h2!= NULL){
        tf->next = h2;
    }
    return hf;
}

int main(){
    Node* h1 = TakeInput();
    Node* h2 = TakeInput();
    Node* final = NULL;
    final = merge(h1,h2);
    print_data(final);
return 0;
}