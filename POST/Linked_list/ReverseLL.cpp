// #include<iostream>
// using namespace std;
// #include "Node.cpp"


// Node* TakeInput(){
//     int data;
//     cin>>data;
//     Node* head = NULL;
//     Node* tail = NULL;
//     while(data !=-1){
//         Node* newNode = new Node(data);
//         if(head ==NULL){
//             head = newNode;
//             tail = newNode;
//         }
//         else{
//             tail->next = newNode;
//             tail = tail->next;
//         }
//         cin>>data;
//     }
//     return head;
// }

// void print_data(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// Node* ReverseLL(Node* head){
//     //this is the base case
//     if(head==NULL || head->next==NULL){
//         return head;
//     }

//     //this is the recursive call

//     Node* reverse = ReverseLL(head->next);


//     //connect the work on the first node (1->NULL)
    
//     //find the last node to connected to NULL

//     Node* temp = reverse;
//     while(temp->next !=NULL){
//         temp =temp->next;
//     }

//     temp->next = head;
//     head->next = NULL;

//     return reverse; //reverse is the new head


// }


// int main(){
//     Node* head = TakeInput();
//     head = ReverseLL(head);
//     print_data(head);
// return 0;
// }
















// this is by the double pointer




















// #include<iostream>
// using namespace std;
// #include "Node.cpp"

// class Pair {
  
//     public:

//     Node *head;
//     Node *tail;
// };  //this is the node made to return more than one variable  



// Pair Reverse_2(Node* head){
//   if(head==NULL || head->next == NULL){  //tis is the Base Case
//       Pair ans;
//       ans.head = head;
//       ans.tail = head;
//       return ans;
//   }

//   Pair reverse = Reverse_2(head->next);
   
//    reverse.tail->next = head; 
//    head->next = NULL;


//     Pair ans;
//    ans.head = reverse.head;  
//    ans.tail = head;

//    return ans;
// }

// Node* Reverse_Better(Node* head){
//     return Reverse_2(head).head;
// }

// Node* TakeInput(){
//     int data;
//     cin>>data;
//     Node* head = NULL;
//     Node* tail = NULL;
//     while(data !=-1){
//         Node* newNode = new Node(data);
//         if(head ==NULL){
//             head = newNode;
//             tail = newNode;
//         }
//         else{
//             tail->next = newNode;
//             tail = tail->next;
//         }
//         cin>>data;
//     }
//     return head;
// }

// void print_data(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }
// int main(){
//     Node* head = TakeInput();
//     head = Reverse_Better(head);
//     print_data(head);
// return 0;
// }

















// Now the simplest one is to connect the tail to the head direct




















// #include<iostream>
// using namespace std;
// #include "Node.cpp"
 


// Node* TakeInput(){
//     int data;
//     cin>>data;
//     Node* head = NULL;
//     Node* tail = NULL;
//     while(data !=-1){
//         Node* newNode = new Node(data);
//         if(head ==NULL){
//             head = newNode;
//             tail = newNode;
//         }
//         else{
//             tail->next = newNode;
//             tail = tail->next;
//         }
//         cin>>data;
//     }
//     return head;
// }



// Node *Reverse_3(Node* head){
//  if(head==NULL || head->next ==NULL){
//      return head;
//  }

//  Node* reverse = Reverse_3(head->next);
//    Node* tail = head->next;  //tail is the last of the node
//    tail->next = head; //Now the tail is connected to the head
//    head->next = NULL;

//    return reverse;
// }

// void print_data(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }
// int main(){
//     Node* head = TakeInput();
//     print_data(head);
//     cout<<endl;
//     head = Reverse_3(head);
//     print_data(head);
// return 0;
// }












// Now iterativly the same question---------











#include<iostream>
using namespace std;
#include "Node.cpp"
 


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



Node *Reverse_iterate(Node* head){
 if(head==NULL || head->next ==NULL){
     return head;
 }

Node* curr = head;
Node* Prev = NULL;
Node* Next = head->next;

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

void print_data(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    Node* head = TakeInput();
    head = Reverse_iterate(head);
    print_data(head);
return 0;
}