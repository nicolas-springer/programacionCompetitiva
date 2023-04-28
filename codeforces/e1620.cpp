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

#define bn '\n'
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;
    ll q,x,a,b;
    vector<ll> res;

    cin>>n;

    while(n--){
        cin>>q;
        if(q==1){
            cin>>x;
            res.pb(x);
        }
        else{
            cin>>a>>b;
            replace(res.begin(),res.end(),a,b);
        }
    }
    forall(it,res)cout<<*it<<" ";
    cout<<bn;

    return 0;
}

