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

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long int a,b,c,d;

    cin>>a>>b>>c>>d;

    ll pa=0,pb=0;

    pa= max((3*a)/10,a-(a/250)*c);
   //cout<<fixed<<setprecision(20)<<pa<<bn;
    pb= max((3*b)/10,b-(b/250)*d);
   //cout<<fixed<<setprecision(20)<<pb<<bn;

   if(pa==pb){
        cout<<"Tie"<<bn;
        return 0;
   }

    if(pa>pb){
        cout<<"Misha"<<bn;
        return 0;
    }
    else{
        cout<<"Vasya"<<bn;
        return 0;
    }


    return 0;
}

