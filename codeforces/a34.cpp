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
    vector<int> vi(n);
    forn(j,n){
        cin>>vi[j];
    }

    if(n==2){
        cout<<"1 2"<<bn;
        return 0;
    }
    int m=abs(vi[0]-vi[1]);
    int i1=1,i2=2;
    for(int i=0;i<n-1;i++){
        if(abs(vi[i]-vi[i+1])<m){
            i1=i+1;
            i2=i+2;
            m=abs(vi[i]-vi[i+1]);
        }
    }
    if(abs(vi[0]-vi[n-1])<m){
            i1=n;
            i2=1;
    }
    cout<<i1<<" "<<i2<<bn;
    return 0;
}

