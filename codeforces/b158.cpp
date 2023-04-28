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

    int n,x;
    int c=0;
    cin>>n;
    int c1=0,c2=0,c3=0,c4=0;
    forn(i,n){
        cin>>x;
        if(x==1)c1++;
        if(x==2)c2++;
        if(x==3)c3++;
        if(x==4)c4++;
    }
    c+=c4;
    c+=c3;
    c1=c1-c3; //algunos c1 se usan para completar los c3, sino no alcanzan sera<0
    if(c2%2==0){//de a pares
        c+=c2/2;
        c2=0;
    }
    else{
        c+=c2/2;
        c2=1;
    }
    if(c2==1){
            c+=c2;
            c1-= c2*2;
    }
    if(c1>0){
        c+=ceil(c1/4.0);
    }

    cout<<c<<bn;
    return 0;
}
//9 2 2 4 3 1 1 1 1 1
