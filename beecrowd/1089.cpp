#include <bits/stdc++.h>
#define bn '\n'
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,x, p=0;

    while (cin>>n && n != 0) {
        p=0;
        vector<int> loop(n);
        for (int i = 0; i < n; i++) {
            cin>>loop[i];
        }
        for (int i = 1; i < n-1; i++) {
            if ((loop[i] > loop[i - 1] && loop[i] > loop[i + 1]) ||
                (loop[i] < loop[i - 1] && loop[i] < loop[i + 1])) {
                p++;
            }
        }
        if ((loop[0] > loop[n - 1] && loop[0] > loop[1]) ||
            (loop[0] < loop[n - 1] && loop[0] < loop[1])) {
            p++;
        }
        if ((loop[n - 1] > loop[n - 2] && loop[n - 1] > loop[0]) ||
            (loop[n - 1] < loop[n - 2] && loop[n - 1] < loop[0])) {
            p++;
        }
        cout<<p<<bn;
        loop.clear();
    }
    return 0;
}
