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

#define bn '\n'
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int n;
    cin>>n;
    int pi[n];
    for(int i=0; i<n; i++) {
        cin>>pi[i];
    }
    for(int i=1; i<=n; i++) {
        for(int j=0; j<n; j++) {
            if(pi[j]==i) {
                cout<<j+1<<" ";
                break;
            }
        }
    }
    cout<<bn;
    return 0;
}

