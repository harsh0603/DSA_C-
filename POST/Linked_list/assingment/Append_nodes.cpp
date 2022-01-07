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


Node* Append(Node* head,int n){
    //find the length of the linked list
    Node* temp = head;
    int leng = 1;
    while(temp!= NULL){
        leng = leng+1;
    }
    int count = leng-n;
    int i=1;
    Node* curr = head;
    //reach the linked list to the provided n from last
    while(i!=count){
        curr = curr->next;
        i++;
    }
    Node* head2 = curr->next;
    curr->next = NULL;
    //conecting the new head to the old one
    Node* temp2 = head2;
    while(temp2->next !=NULL){
        temp2 = temp2->next;
    }
    temp2->next = head;
    return head2;
}
int main(){
    Node* head = TakeInput();
    // print_data(head);
    // cout<<endl;
    int n;
    cin>>n;
    Node* head2 = Append(head,n);
    print_data(head2);
return 0;
}