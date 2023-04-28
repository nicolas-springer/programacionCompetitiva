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
    //ios_base::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);

    int n,m;

    vector<string> vs;

    string s;
    cin>>n>>m;
    forn(i,n){
        cin>>s;
        vs.pb(s);
    }
    int h=0,v=0;
    forn(i,n){
        if(vs[i].find('S')==string::npos) h++;
    }
    bool esta=false;
    forn(i,m){
        esta=false;
        for(string sx : vs){
            if(sx[i]=='S'){
                esta=true;
                break;
            }
        }
        if(!esta) v++;
    }
    //cout<<"h: "<<h<<" v: "<<v<<bn;
    cout<<h*m+(n-h)*v<<bn;
    return 0;
}

