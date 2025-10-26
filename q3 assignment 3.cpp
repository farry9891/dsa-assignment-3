#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isBalanced(const string &exp) {
 stack<char> s;
 for (char ch : exp) {
 if (ch == '(' || ch == '{' || ch == '[') {
 s.push(ch);
 }
 else if (ch == ')' || ch == '}' || ch == ']') {
 if (s.empty())
 return false;
 char top = s.top();
 s.pop();
 if ((ch == ')' && top != '(') ||
 (ch == '}' && top != '{') ||
 (ch == ']' && top != '['))
 return false;
 }
 }
 return s.empty();
}
int main() {
 string exp;
 cout << "Enter an expression: ";
 getline(cin, exp);
 if (isBalanced(exp))
 cout << "Balanced" << endl;
 else
 cout << "Not Balanced" << endl;
 return 0;
}
