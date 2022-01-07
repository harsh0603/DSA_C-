#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
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

void Odd_Even(Node **head)
{
    if (*head == NULL )
    {
        return ;
    }

    Node *temp = *head;
    Node *Oh = NULL;
    Node *Ot = NULL;
    Node *Eh = NULL;
    Node *Et = NULL;

    while (temp != NULL)
    {
        int val = temp->data;
        if (val % 2 == 0)
        {
            if (Eh == NULL)
            {
                Eh = temp;
                Et = temp;
            }else{

            Et->next = temp;
            Et = Et->next;
            }
        }
        else
        {
            if (Oh == NULL)
            {
                Oh = temp;
                Ot = temp;
            }else{

            Ot->next = temp;
            Ot = Ot->next;
            }
        }
        temp = temp->next;
    }

    if(Oh==NULL || Eh==NULL){
        return;
    }
    Ot->next = Eh;
    Et->next = NULL;


    *head = Oh;
}

int main()
{
    Node *head = TakeInput();
     Odd_Even(&head);
    print_data(head);
    return 0;
}