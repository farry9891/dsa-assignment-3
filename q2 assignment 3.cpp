#include <iostream>
#include <stack>
#include <string>
using namespace std;
string reverseString(const string &s) {
 stack<char> st;

 for (char ch : s)
 st.push(ch);
 string reversed = "";

 while (!st.empty()) {
 reversed += st.top();
 st.pop();
 }
 return reversed;
}
int main() {
 string str;
 cout << "Enter a string: ";
 getline(cin, str); // allows spaces too
 cout << "Reversed String: " << reverseString(str) << endl;
 return 0;
}

