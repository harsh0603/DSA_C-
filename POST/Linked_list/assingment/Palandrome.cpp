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
    return;
}

Node* reverse(Node* head2){
    Node* curr = head2;
    Node* Prev = NULL;
    Node* Next = head2->next;

    while(curr!=NULL){
   
curr->next = Prev;
Prev = curr;
curr = Next;
if(curr !=NULL){
Next = Next->next;
}
   
}

return Prev;
}

Node* midPoint(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL ||fast->next!= NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
int check(Node* head){

    Node* mid = midPoint(head);
    Node* head2 = mid->next;
    mid->next = NULL;

    head2 = reverse(head2);

    while(head2!=NULL){
        if(head->data != head2->data){
            return -1;
        }
    }
    return 1;
}
int main(){
    Node* head = TakeInput();
    int CHECK = check(head);
    cout<<"the linked list is "<<CHECK; 
return 0;
}