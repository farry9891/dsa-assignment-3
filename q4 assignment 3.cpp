#include <iostream>
#include <stack>
#include <string>
using namespace std;
int precedence(char op) {
 if (op == '+' || op == '-') return 1;
 if (op == '*' || op == '/') return 2;
 if (op == '^') return 3;
 return 0;
}
string infixToPostfix(const string &exp) {
 stack<char> s;
 string result = "";
 for (char ch : exp) {
 if (isalnum(ch)) {
 result += ch;
 }
 else if (ch == '(') {
 s.push(ch);
 }
 else if (ch == ')') {
 while (!s.empty() && s.top() != '(') {
 result += s.top();
 s.pop();
 }
 if (!s.empty()) s.pop();
 }
 else {
 while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
 result += s.top();
 s.pop();
 }
 s.push(ch);
 }
 }

 while (!s.empty()) {
 result += s.top();
 s.pop();
 }
 return result;
}
int main() {
 string exp;
 cout << "Enter infix expression: ";
 getline(cin, exp);
 cout << "Postfix Expression: " << infixToPostfix(exp) << endl;
 return 0;
}


