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

    cin>>n;
    vector<int> v(n);
    forn(i,n){
        cin>>v[i];
    }
    if(n==3){
        cout<<v[2]-v[0]<<bn;
        return 0;
    }
    int a=1;
    int aux=0;
    int res=INT_MAX;
    for(int i=0; i < n-2 ; i++){
        aux=0;
        for(int j=0; j<n-1;j++){
            if(j!=a){
                if(j==a-1){
                    aux=max(v[j+2]-v[j],aux);
                   // cout<<"a-1: "<<v[j+2]-v[j]<<" "<<aux<<bn;
                }
                else {
                    aux=max(v[j+1]-v[j],aux);
                //cout<<v[j+2]-v[j]<<" "<<aux<<bn;
                }
            }
        }
        //cout<<"###################################"<<bn;
        //cout<<bn;
        //cout<<"i: "<<i<<" aux: "<<aux<<bn;
        res = min(res,aux);
        a++;
    }
    cout<<res<<bn;
    return 0;
}

