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

    int n,k,l,c,d,p,nl,np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
        //3 4 5 10 8 100 3   1
    int ccd = (c*d); // 80
    int cnl = (k*l)/nl; //20/3 = 6
    int cnp = p/np; //100

    int x = min({ccd,cnl,cnp});
    cout<<x/n<<bn;

    return 0;
}


