// Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
const int MAX_SIZE = 100;
int Array[MAX_SIZE];
int top = -1;
void Push(int x) {
    if (top == MAX_SIZE - 1)
    {
        printf("stock overflow");
    }
    Array[++top] = x;

}
void Pop() {
    if (top==-1)
    {
        printf("No element to pop");
    }
    else
    {
        top--;

    }
}
int Top() {
    return Array[top];
}
bool IsEmpty() {
    if (top==MAX_SIZE -1)
    {
        printf("stock overflow");
        return false;
    }
}
int main()
{

    std::cout << "Hello World!\n";
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
