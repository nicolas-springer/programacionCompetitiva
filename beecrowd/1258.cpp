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

    int n;
    bool primero=true;
    while(cin>>n && n!=0){
        cin.ignore();
        if(primero){
            primero=false;
        }
        else{
            cout<<bn;
        }
        multiset<tuple<string, int, string>> st;
        string name,col,t;
        int auxt;
        forn(i,n){
            getline(cin,name);
            cin>>col>>t;
            if(t=="P")auxt=1;
            if(t=="M")auxt=2;
            if(t=="G")auxt=3;
			//cout<<"##"<<name<<"-"<<t<<"-"<<col<<bn;
            st.insert({col,auxt,name});
            cin.ignore();
        }

        for(const auto & tup : st){
            char c =  get<1>(tup)==1? 'P' : get<1>(tup)==2 ? 'M' : 'G';
            cout<<get<0>(tup)<<" "<<c<<" "<<get<2>(tup)<<bn;
        }
    }

    return 0;
}

