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

    int n, x;
    cin>>n>>x;
    int a,b;
    int maxx=-1,miny=1001;
    while(n--){
        cin>>a>>b;
        if(a>b) swap(a,b);
        maxx = max(maxx,a);
        miny = min(miny,b);
       // cout<<maxx<<" "<<miny<<bn;
    }

    if(maxx>miny){
        cout<<"-1"<<bn;
    }
    else{
        if(x>=maxx && miny<x)cout<<"0"<<bn;
            else{
                if(x>=maxx && miny>x)cout<<abs(miny-x)<<bn;
                if(x<=maxx && miny>x) cout<<abs(maxx-x)<<bn;
        }
    }

    return 0;
}
