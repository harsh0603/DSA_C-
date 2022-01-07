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

void DeleteN(Node* head,int M,int N){
    int c1,c2;
    Node* t1=head;
    Node* t2 = NULL;

    while(t1){
        for(int c1=1; c1<M && t1!= NULL;c1++){
            t1 = t1->next;
        }

        if(t1==NULL){
            return;
        }
        t2 = t1->next;
        
        for(int c2=1;c2<=N && t2!=NULL;c2++){
            Node* temp = t2;
            t2 = t2->next;
            free (temp);
            
        }
        t1->next = t2;
        t1 = t2;
    }



}


int main(){
    Node* head = TakeInput();
    int M,N;
    cin>>M>>N;
    DeleteN(head,M,N);
    cout<<endl;
    print_data(head);
return 0;
}