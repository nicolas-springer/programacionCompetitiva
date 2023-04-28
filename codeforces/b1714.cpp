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
    //ios_base::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);

    int x,t,n,c;


    cin>>t;
    while(t--){
        c=0;
        cin>>n;
        cout<<n<<bn;
        vector<int> vi;
        vi.clear();
       // vector<int> va;

        for(int i = 0; i<n;i++){
            cin>>x;
            vi.pb(x);
        }
        //va=vi;

        for(auto it=vi.begin(); it!=vi.end();it++){
            if(find(vi.begin()+1,vi.end(),*it) != vi.end()){
                cout<<"f:"<<*it;
                c++;
                it = vi.erase(vi.begin());
            }
        }
        vi.clear();
        cout<<c<<bn;

    }

    return 0;
}

