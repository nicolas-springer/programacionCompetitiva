#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        string result;
        stack<char> stk;
        for (char c : line) {
            if (c == '[') {
                while (!stk.empty()) {
                    result += stk.top();
                    stk.pop();
                }
            } else if (c == ']') {
                while (!stk.empty()) {
                    result += stk.top();
                    stk.pop();
                }
            } else {
                stk.push(c);
            }
        }
        while (!stk.empty()) {
            result += stk.top();
            stk.pop();
        }
        cout << result << endl;
    }
    return 0;
}

