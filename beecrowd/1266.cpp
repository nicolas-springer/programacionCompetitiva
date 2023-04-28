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
    while(cin>>n && n!=0){
    int x;
    vector<int> v(n);
    forn(i,n)cin>>v[i];

    bool f=false;
    int c=0,p=0;

    for(int i=0; i<n;i++){
        if(v[i]==0)c++;
        else c=0;
        if(i==1 && c==2){
            f=true;
            p++;
            c=0;
        }
        if(c==2){
            p++;
            c=0;
        }
    }

    if(!f){
        if(v[0]==0 && v[n-1]==0)||()p++;
    }
    cout<<p<<bn;
    }


    return 0;
}
