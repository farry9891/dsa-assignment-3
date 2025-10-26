#include <iostream>
#include <stack>
#include <string>
using namespace std;
int evaluatePostfix(const string &exp) {
 stack<int> s;
 for (char ch : exp) {
 if (isdigit(ch)) {
 s.push(ch - '0');
 }
 else {
 int b = s.top(); s.pop();
 int a = s.top(); s.pop();
 switch (ch) {
 case '+': s.push(a + b); break;
 case '-': s.push(a - b); break;
 case '*': s.push(a * b); break;
 case '/': s.push(a / b); break;
 default:
 cout << "Invalid operator: " << ch << endl;
 return -1;
 }
 }
 }
 return s.top();
}
int main() {
 string exp;
 cout << "Enter postfix expression (single-digit numbers): ";
 getline(cin, exp);
 cout << "Evaluation Result: " << evaluatePostfix(exp) << endl;
 return 0;
}
