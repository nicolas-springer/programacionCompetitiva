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

    int n;
    cin>>n;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%77==0 || n%44==0
       || n%477==0 || n%447==0 || n%474==0 || n%444==0
       || n%744==0 || n%747==0 || n%774==0 || n%777==0){
        cout<<"YES"<<bn;
        return 0;
    }
    else{
        cout<<"NO"<<bn;
    }

    return 0;
}

