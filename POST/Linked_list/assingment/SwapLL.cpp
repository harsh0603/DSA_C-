#include<iostream>
using namespace std;
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

void Swap(Node* head,int first,int second){
    if(head==NULL || head->next==NULL){
        return;
    }

    Node* c1,*c2;
    Node* p1,*p2;
    int i = 0;
    int j = 0;
    Node*temp = head;
   
   if(first==0){
       c1 = temp;
       p1 = c1->next;
       temp =head;
       while(j!=second){
        if(j==second-1){
            p2=temp;
        }
        temp = temp->next;
        j++;
    }
    c2= temp;

    p2->next = c1;
    c1->next = c2->next;
    c2->next = p1;
    head= c2;
     return;
   }

    while(i!=first){
        if(i==first-1){
            p1 = temp;
        }
        temp = temp->next;
        i++;
    }
    c1 = temp;
    temp = head;
    while(j!=second){
        if(j==second-1){
            p2=temp;
        }
        temp = temp->next;
        j++;
    }
    c2= temp;
    p1->next = c2;
    p2->next = c1;
    c1->next = c2->next;
    c2->next = p2; 


}
int main(){
    Node* head = TakeInput();
    int i,j;
    cin>>i>>j;
    Swap(head,i,j);
    print_data(head);
return 0;
}