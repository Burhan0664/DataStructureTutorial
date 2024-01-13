// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <ios>
struct Node
{
    int data;
    struct Node* next;
};
Node* head = new Node();
void Insert(int data) {
    Node* temp = new Node();
    temp->data = data;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }


}
struct Node* Struct_Insert(int data) {
    Node* temp = new Node();
    temp->data = data;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    return head;

}
void Delete(int n) {
    Node* temp = new Node();
    temp = head;
    if (n == 1)
    {
        head = head->next;
        free(temp);
        return;

    }
    else if (n == 2)
    {
        for (int i = 0; i < n - 3; i++)
        {
            temp = temp->next;
        }
        Node* temp1 = new Node();

        temp1 = temp->next;
        temp->next = temp1->next;
        free(temp1);

    }
    else
    {
        for (int i = 0; i < n - 2; i++)
        {
            temp = temp->next;
        }
        Node* temp1 = new Node();

        temp1 = temp->next;
        temp->next = temp1->next;
        free(temp1);

    }


}
void Print() {
    Node* temp = new Node();
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void PrintRecursion(Node* p) {
    if (p==NULL)
    {
        return;
    }
    printf("%d ", p->data);
    PrintRecursion(p->next);
    
}
int main()
{
    head = NULL;
    head =Struct_Insert(5);
    head =Struct_Insert(3);
    head = Struct_Insert(7);

    PrintRecursion(head);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
