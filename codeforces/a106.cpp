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

    vector<char> v = {'6','7','8','9','T','J','Q','K','A'};


    string a,b;
    char x;

    cin>>x;
    cin>>a>>b;


    if(a[1]==x && b[1]!=x){
        cout<<"YES"<<bn;
        return 0;
    }

    if(b[1]==x && a[1]!=x){
        cout<<"NO"<<bn;
        return 0;
    }
    auto ita = find(v.begin(),v.end(),a[0]);
    auto itb = find(v.begin(),v.end(),b[0]);

    if(a[1]==b[1]){
        distance(v.begin(),ita) > distance(v.begin(),itb) ? cout<<"YES"<<bn : cout<<"NO"<<bn;
        return 0;
    }

    cout<<"NO"<<bn;
    return 0;
}

