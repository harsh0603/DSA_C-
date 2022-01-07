#include<iostream>
using namespace std;


// class Node{
//     public:

//     int data;
//     Node* next,*Prev;

//     Node(int data){
//        this->data = data;
//        next = NULL;
//        Prev = NULL;

//     }
// };


// void print_data(Node* head,Node* Pev){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp =temp->next;
//     }
//     cout<<endl;

//     Node* temp2 = Pev;

//     while(temp2!=NULL){
//         cout<<Pev->data<<" ";
//         Pev = Pev->Prev;
//     }

// }


// int main(){
// Node n1(12);

// Node* head = &n1;

// Node n2(15);
// n2.Prev= &n1;
// n1.next = &n2;

// Node n3(14);
// n3.Prev= &n2;
// n2.next = &n3;

// Node n4(17);
// n4.Prev= &n3;
// n3.next = &n4;

// Node* Pev = &n4;

// print_data(head,Pev);


// return 0;
// }



// the dynamic allocation-------




// int main(){
    
//     Node* n1 = new Node(12);

// Node* head = n1;

// Node* n2= new Node(15);
// n2->Prev= n1;
// n1->next = n2;

// Node* n3=new Node(14);
// n3->Prev= n2;
// n2->next = n3;

// Node* n4=new Node(17);
// n4->Prev= n3;
// n3->next = n4;

// Node* Pev = n4;

// print_data(head,Pev);
    
    
//     return 0;
// }




// the TakeInput function----------


struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head,*tail = NULL;

void TakeInput(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if(head==NULL){
       head = tail = newNode;
       head->prev = NULL;
       tail->next = NULL;
    }else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
        tail->next = NULL;
    }
}

void display(){
    struct Node* temp2 = head;
    struct Node* temp = tail;


    while(temp2!=NULL){
        cout<<temp2->data<<" ";
        temp2 = temp2->next;
    }
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
}



int main(){
    TakeInput(4);
    TakeInput(7);
    TakeInput(6);
    TakeInput(24);
    TakeInput(49);
    TakeInput(9);

    display();
    return 0;
}