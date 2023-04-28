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

    ll t,n,x;

    cin>>t;
    while(t--){

        cin>>n;
        vector<ll> vi;
        vector<ll> vaux;
        for(int k=0;k<n;k++){
            cin>>x;
            vi.pb(x);
        }
        vaux=vi;
        sort(vi.begin(),vi.end());
        ll m1,m2;
        m1=vi[vi.size()-1];
        m2=vi[vi.size()-2];

        for(int i=0;i<vaux.size();i++){
            if((vaux[i])<m1){
                //cout<<"1:"<<*it<<" "<<m1<<(*it)-m1<<" ";
                cout<<(vaux[i])-m1<<" ";
            }
            else{
                //cout<<"2:"<<*it<<" "<<m2<<(*it)-m2<<" ";
                cout<<(vaux[i])-m2<<" ";
            }
        }
        cout<<bn;
    }

    return 0;
}

