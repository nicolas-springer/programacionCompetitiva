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
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }



int main(){
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;

    if(n==1){
        cout<<"Top 1"<<bn;return 0;
    }
    if(n==2 || n==3){
        cout<<"Top 3"<<bn;return 0;
    }
    if(n<=5){
        cout<<"Top 5"<<bn;return 0;
    }
    if(n<=10){
        cout<<"Top 10"<<bn;return 0;
    }
    if(n<=25){
        cout<<"Top 25"<<bn;return 0;
    }
    if(n<=50){
        cout<<"Top 50"<<bn;return 0;
    }
    if(n<=100){
        cout<<"Top 100"<<bn;return 0;
    }

    return 0;
}

