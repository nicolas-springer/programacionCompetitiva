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

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    queue<int> q;
    queue<int> desc;
    int n,x,aux;
    while(cin>>n && n!=0){
        if(n>1){
            aux=n;
        for(int i = 1; i<=n; i++){
            q.push(i);
        }

        while(q.size()>=2){
            x = q.front();
            desc.push(x);
            q.pop();
            x = q.front();
            q.pop();
            q.push(x);
        }
        cout<<"Discarded cards: ";
        while (aux>2) {
        x = desc.front();
        cout << x << ", ";
        desc.pop();
        aux--;
        }
        x = desc.front();
        cout << x <<bn;

        cout<<"Remaining card: "<<q.front()<<bn;
        q = queue<int>();
        desc = queue<int>();
        }
        else{
            cout<<"Discarded cards: "<<bn;
            cout<<"Remaining card: "<<1<<bn;
        }
    }

    return 0;
}
