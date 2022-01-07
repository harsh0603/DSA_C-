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

int search(Node* head,int sear){
    Node* temp = head;
    int count = 0;

    while(temp !=NULL){
        if(temp->data == sear){
            return count;
        }
        temp = temp->next;
        count++;
    }

  return -1;

} 
int main(){
    int t;
    cin>>t;
    while(t){
  Node* head = TakeInput();
  print_data(head);
  int sear;
  int pos;
  cin>>sear;
  pos = search(head,sear);
  cout<<pos<<endl;
      }  
return 0;
}