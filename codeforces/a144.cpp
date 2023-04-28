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

    int n;
    vector<int> v;
    set<int> s;
    int x;
    cin>>n;
    forn(i,n){
        cin>>x;
        v.pb(x);
        s.insert(x);
    }

    int a=*(s.begin());
    int b=*(s.rbegin());
    //cout<<"a: "<<a<<"b: "<<b<<bn;
    int ia,ib;

    dforn(i,n){
        if(v[i]==a){
            ia=i;
            break;
        }
    }
    forn(i,n){
        if(v[i]==b){
            ib=i;
            break;
        }
    }
    int d;
    //cout<<"ia: "<<ia<<"ib: "<<ib<<bn;
    if(ia<ib){
        d = ib + (n-ia-1) - 1;
    }
    else{
        d = ib + (n-ia-1);
    }
    if(ia==ib){
        d=0;
    }

    cout<<d<<bn;
    return 0;
}

