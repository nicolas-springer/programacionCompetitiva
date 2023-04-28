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
bool prime(ll n) {
     if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0) return false;

    int iter = 5;
    for (int i = 0; i < iter; i++) {
        long long a = rand() % (n - 3) + 2;
        if (pow((int)a,(int) n - 1)%n != 1) return false;
    }

    return true;}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n,x;
    cin>>n;
    while(n--){

        cin>>x;
        int c=0;
        int m;
        m=sqrt(x);
        m*m==x && prime(m) ? cout<<"YES"<<bn : cout<<"NO"<<bn;

    }

    return 0;
}

