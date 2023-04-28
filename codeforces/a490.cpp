#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin(); it!=v.end(); it++)
#define sz(c) ((int)c.size())
#define rsz resize
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define fst first
#define snd second
#define ll long long int
#define stolower(str) transform(str.begin(), str.end(), str.begin(), ::tolower)

#define bn '\n'
using namespace std;
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;

    stack<pair<int,int>> stk1;
    stack<pair<int,int>> stk2;
    stack<pair<int,int>> stk3;
    cin>>n;
    int x,c=0;
    for(int i = 1; i<=n; i++){
        cin>>x;
        if(x==1)stk1.push({1,i});
        if(x==2)stk2.push({2,i});
        if(x==3)stk3.push({3,i});
    }
    int aux = stk3.size();
    c = min(stk1.size(),stk2.size());
    c = min(aux,c);
    cout<<c<<bn;
    while(!stk1.empty() && !stk2.empty() && !stk3.empty()){
        cout<<stk1.top().second<<" "<<stk2.top().second<<" "<<stk3.top().second<<bn;
        stk1.pop();stk2.pop();stk3.pop();
    }


    return 0;
}

