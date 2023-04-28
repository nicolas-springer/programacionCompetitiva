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

    int t;
    cin>>t;

    int n,x;

    bool ok=true;
    while(t--){
        vector<int> v;
        ok=true;
        cin>>n;
        forn(i,n){
            cin>>x;
            v.pb(x);
        }
       // forn(i,n)cout<<v[i]<<" ";
        //cout<<bn;
        if(v[0]!=v[1] && v[0]!=v[n-1]){
            cout<<"1"<<bn;
            ok=false;
        }
        else if(v[0]!=v[n-1] && v[n-2]!=v[n-1]){
            cout<<n<<bn;
            ok=false;
        }
            if(ok){
                for(int i=1;i<n-1;i++){
                if(v[i]!=v[i-1] && v[i]!=v[i+1]){
                    cout<<i+1<<bn;
                    break;
                }
            }

        }
    v.clear();
    }
    return 0;
}

