#include <iostream>
using namespace std;
class Stack {
 int *stack;
 int top;
 int size;
public:
 Stack(int s) {
 size = s;
 stack = new int[size];
 top = -1;
 }
 bool isEmpty() {
 return top == -1;
 }
 bool isFull() {
 return top == size - 1;
 }
 void push(int value) {
 if (isFull())
 cout << "Stack Overflow!" << endl;
 else {
 stack[++top] = value;
 cout << "Pushed " << value << endl;
 }
 }
 void pop() {
 if (isEmpty())
 cout << "Stack Underflow!" << endl;
 else
 cout << "Popped " << stack[top--] << endl;
 }
 void peek() {
 if (isEmpty())
 cout << "Stack is Empty!" << endl;
 else
 cout << "Top Element: " << stack[top] << endl;
 }
 void display() {
 if (isEmpty())
 cout << "Stack is Empty!" << endl;
 else {
 cout << "Stack elements: ";
 for (int i = 0; i <= top; i++)
 cout << stack[i] << " ";
 cout << endl;
 }
 }
 ~Stack() {
 delete[] stack;
 }
};
int main() {
 int size;
 cout << "Enter stack size: ";
 cin >> size;
 Stack s(size);
 int choice, val;
 while (true) {
 cout << "\nMenu: 1.Push 2.Pop 3.Peek 4.Display 5.Exit\n";
 cout << "Enter your choice: ";
 cin >> choice;
 switch (choice) {
 case 1:
 cout << "Enter value to push: ";
 cin >> val;
 s.push(val);
 break;
 case 2:
 s.pop();
 break;
 case 3:
 s.peek();
 break;
 case 4:
 s.display();
 break;
 case 5:
 cout << "Exiting program..." << endl;
 return 0;
 default:
 cout << "Invalid choice!" << endl;
 }
 }
}

