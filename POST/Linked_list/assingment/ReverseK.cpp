#include<iostream>
using namespace std;
class Pair{
public:
  Node* head1;
  Node* tail1;
};
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
      this->data = data;
      next =NULL;
    }
};

Node *TakeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

void print_data(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}

Pair reverse(Node*head){
 
 if(head==NULL || head->next==NULL){
     Pair ans;
     ans.head1 = head;
     ans.tail1 = head;
     return ans;
 }

 Pair rev = reverse(head->next);
 rev.tail1->next = head;
 head->next = NULL;


    Pair ans;
   ans.head1 = rev.head1;  
   ans.tail1 = head;
 return ans;
}

Node* ReverseK(Node* head,int k){
  if(head==NULL){
     return NULL;
  }
  Node* pre = NULL;
  Node* Next = NULL;
  Node*  Curr= head;
int count = 1;
while(Curr!=NULL && count<=k)
   Next = Curr->next;

}


int main(){
    
return 0;
}