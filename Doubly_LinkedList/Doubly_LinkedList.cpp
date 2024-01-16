// Doubly_LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
struct Node {
    int data;
    Node* prev;
    Node* next;
};
Node* head = new Node();

struct Node* GetNewNode(int x) {
    Node* temp = new Node();
    temp->prev = NULL;
    temp->next = NULL;
    temp->data = x;
    return temp;
}
void InsertAtHead(int x) {
    
    Node* temp = GetNewNode(x);
    if (head == NULL)
    {
        head = temp;
    }
    else

    {
        head->prev = temp;
        temp->next = head;  
        head = temp;
    }
   
}
void InsertAtTail(int x) {
    Node* temp = GetNewNode(x);
    Node* temp1 = GetNewNode(x);

    if (head == NULL)
    {
        head = temp;
    }
    else {
        temp = head;
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp1->prev = temp;
        temp->next = temp1;


        
    }
}
void Print() {
    Node* temp = GetNewNode(NULL);
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    head = NULL;
    InsertAtHead(5);
    InsertAtHead(3);
    InsertAtHead(2);
    InsertAtTail(7);
    InsertAtTail(9);

    Print();
}
