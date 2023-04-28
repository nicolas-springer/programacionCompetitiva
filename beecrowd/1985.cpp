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
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }



int main(){
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,o,c;

    cin>>n;
    double tot=0;
    while(n--){
        cin>>o>>c;

        if(o==1001){
            tot+=1.5*c;
        }
        else if(o==1002){
            tot+=2.5*c;
        }
        else if(o==1003){
            tot+=3.5*c;
        }
        else if(o==1004){
            tot+=4.5*c;
        }
        else if(o==1005){
            tot+=5.5*c;
        }
    }
    cout<<fixed<<setprecision(2)<<tot<<bn;


    return 0;
}

