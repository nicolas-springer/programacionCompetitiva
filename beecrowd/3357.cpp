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
    double q,c,r;

    cin>>n>>q>>c;

    vector<string> v(n);
    forn(i,n)cin>>v[i];

    r=fmod(q,c);
    int pos = q/c;
    if(r==0.0){
        cout<<fixed<<setprecision(1)<<v[(pos-1)%n]<<" "<<c<<bn;
    }
    else{
        cout<<fixed<<setprecision(1)<<v[pos%n]<<" "<<r<<bn;
    }


    return 0;
}

