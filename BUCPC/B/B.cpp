#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        getline(cin, s);
        stack<char> stk;
        bool flag = true;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(' || s[i] == '[') {
                stk.push(s[i]);
            }
            else if (s[i] == ')') {
                if (stk.size() && stk.top() == '(') stk.pop();
                else flag = false;
            }
            else { 
                if (stk.size() && stk.top() == '[') stk.pop();
                else flag = false;
            }
        }
        if (stk.size()) flag = false;
        cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}