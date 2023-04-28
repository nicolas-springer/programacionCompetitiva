#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int n, d;
    while (cin>>n>>d && n!=0 && d!=0) {
        string num;
        cin>>num;
        stack<char> s;
        int del = 0;
        for (char c : num) {
            while (!s.empty() && del < d && s.top() < c) {
                s.pop();
                del++;
            }
            s.push(c);
        }
        while (del < d) {
            s.pop();
            del++;
        }
        string res = "";
        while (!s.empty()) {
            cout<<s.top();
            s.pop();
        }
        cout<<bn;
    }
    return 0;
}

