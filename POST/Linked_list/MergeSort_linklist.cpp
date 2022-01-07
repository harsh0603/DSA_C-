// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
    
// };
// void SplitList(Node* head,Node** front,Node** back){
//     Node*ptr1 = head->next;
//     Node* ptr2 = head;

//     while(ptr1!=NULL){
//         ptr1=ptr1->next;
//         if(ptr1!= NULL){
//             ptr2 = ptr2->next;
//             ptr1 = ptr1->next;
//         }
//     }

//     *front = head;
//     *back = ptr2->next;
//     ptr2->next = NULL;
// }

// Node* merge(Node* list1,Node* list2){
//     Node* result = NULL;
//     if(list1 == NULL){
//         return list2;
//     }
//     else if(list2 == NULL){
//         return list1;
//     }

//     if(list1->data<list2->data){
//         result = list1;
//         result->next = merge(list1->next,list2);
//         }else{
//             result = list2;
//             result->next = merge(list1,list2->next);
//         }

//         return result;
// }

// void MergeSort(Node** thead){
     
//      Node* head = *thead;
//      Node* ptr1,*ptr2;

//      if(head==NULL || head->next == NULL){
//          return ;
//      }

//      SplitList(head,&ptr1,&ptr2);

//      MergeSort(&ptr1);
//      MergeSort(&ptr2);

//      *thead = merge(ptr1,ptr2); 
     
//      }

// void push (Node** thead,int Node_data){
//     Node* newNode = new Node();
//       newNode->data = Node_data;
//       newNode->next = (*thead);
//       (*thead) = newNode;
// }

// void print_data(Node* mylist){
//     Node* temp = mylist;
//     while(temp!= NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     return;
// }

// int main(){
   
//    Node* Mylist = NULL;
  
//    push(&Mylist,12);
//    push(&Mylist,5);
//    push(&Mylist,8);
//    push(&Mylist,9);
//    push(&Mylist,7);
//    push(&Mylist,15);
//    push(&Mylist,18);


//    print_data(Mylist);
//    cout<<endl;

//    MergeSort(&Mylist);

//    print_data(Mylist);
// return 0;
// }


























//this for the search and all is done by the refference or by the address of the linked list





























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

void SplitList(Node* head,Node** front,Node** back){
    Node*ptr1 = head->next;
    Node* ptr2 = head;

    while(ptr1!=NULL){
        ptr1=ptr1->next;
        if(ptr1!= NULL){
            ptr2 = ptr2->next;
            ptr1 = ptr1->next;
        }
    }

    *front = head;
    *back = ptr2->next;
    ptr2->next = NULL;
}

Node* merge(Node* list1,Node* list2){
    Node* result = NULL;
    if(list1 == NULL){
        return list2;
    }
    else if(list2 == NULL){
        return list1;
    }

    if(list1->data<list2->data){
        result = list1;
        result->next = merge(list1->next,list2);
        }else{
            result = list2;
            result->next = merge(list1,list2->next);
        }

        return result;
}

void MergeSort(Node** thead){
     
     Node* head = *thead;
     Node* ptr1,*ptr2;

     if(head==NULL || head->next == NULL){
         return ;
     }

     SplitList(head,&ptr1,&ptr2);

     MergeSort(&ptr1);
     MergeSort(&ptr2);

     *thead = merge(ptr1,ptr2); 
     
     }

int main(){
    Node* head = TakeInput();
    MergeSort(&head);
    print_data(head);
return 0;
}





