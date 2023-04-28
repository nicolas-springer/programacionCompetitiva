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

    int n,m,x;


    cin>>n>>m;
    string s;
    vector<vector<int>> v(n);
    forn(i,n){
        vector<int> aux;
        cin>>s;
        for(char c: s){
        aux.pb(c-'0');
        }
        v[i]=aux;
    }

    vector<int> res(n);
    int c=0,ma;
    forn(i,m){
        ma=-1;
        multiset<int> msi;
        forn(j,n){
            msi.insert(v[j][i]);
        }
        ma=*msi.rbegin();
        //cout<<"ma: "<<ma<<bn;
        forn(j,n){
            if(v[j][i]==ma){
                res[j]=1;
            }
        }
    }

    forall(it,res){
        //cout<<*it<<" ";
        if(*it==1)c++;
    }
    cout<<c<<bn;



    return 0;
}
