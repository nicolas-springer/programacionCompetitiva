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

    long double n,p,c;
    int ciu=1;
    cin>>n;
    while(true){
        map<int,int> si;
        double cp=0,cc=0;
        forn(i,n){
            cin>>p>>c;
            cp+=p;
            cc+=c;
            si[c/p]+=p;
        }
        cout<<"Cidade# "<<ciu<<":"<<bn;

        for(auto it = si.begin(); it!=si.end();it++){
            if(next(it) == si.end())  cout<<it->second<<"-"<<it->first<<bn;
            else cout<<it->second<<"-"<<it->first<<" ";
        }
        cout<<"Consumo medio: "<<fixed<<setprecision(2)<<floor((cc/cp) * 100) / 100<<" m3."<<bn;

        ciu++;
        cin>>n;
        if(n==0){
            break;
        }
        else{
            cout<<bn;
        }
    }

    return 0;
}
