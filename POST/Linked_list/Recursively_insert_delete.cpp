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


Node* InsertNode_recurr(Node*head, int pos, int data){
        Node* newNode =new Node (data);
     if(head == NULL){
         return head;
     }   
     if(pos == 0){
        newNode->next = head;
        head = newNode;
        return head;
     }
     
     Node* x  = InsertNode_recurr(head->next,pos-1,data);
     head->next = x;
     return head;
     
}

Node* delete_node(Node* head, int pos){
   if (head == NULL){
       return NULL;
   }

   if (pos==0){
       Node* temp = head;
       head = head->next;
       delete temp;
       return head;
   }

   Node* x = delete_node(head->next,pos-1);
     head->next = x;
     return head;
}
void print_data(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }


}
int main(){
    Node* head = takeInput();
    print_data(head);
    cout<<endl;
    int pos,data;
    cin>>pos>>data;
    bool choice;
    cout<<"What to do insert or delete: ";
    cin>>choice;
    cout<<endl;
    if(choice== 0){
        head = delete_node(head,pos);
    }else{
        
    head = InsertNode_recurr(head,pos,data);
    }

    print_data(head);
return 0;
}