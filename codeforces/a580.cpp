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

    int n,c=1,x;
    cin>>n;
    vector<int> v;
    while(n--){
        cin>>x;
        v.pb(x);
    }
    int m=0;
    for(int i=0; i<v.size()-1;i++){
        if(v[i]<=v[i+1])c++;
        else{
            if(c>m)m=c;
            c=1;
        }
    }
    if(c>m)m=c;
    cout<<m<<bn;
    return 0;
}

