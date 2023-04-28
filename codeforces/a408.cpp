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

    int c;
    cin>>c;
    ll ans=LLONG_MAX;

    vector<int> vn(c);
    forn(i,c)cin>>vn[i];

    for(int i=0; i < vn.size();i++){
        int n,x;
        ll aux=0;
        forn(h,vn[i]){
            cin>>x;
            aux+=(x*5);
            aux+=15;
        }
        if(aux<ans){
            ans=aux;
        }

    }

    cout<<ans<<bn;

    return 0;
}

