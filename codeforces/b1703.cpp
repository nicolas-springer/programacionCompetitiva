
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

    int t,n;
    string s;
    cin>>t;


    map<char,int> m;
    while(t--){
        cin>>n;
        cin>>s;
        for(int i=0; i<n;i++){
            char k = s[i];
            m[k]++;
        }
        int sum=0;
        forall(it,m){
            sum+=it->second;
        }
        sum+=m.size();
        cout<<sum<<bn;
        m.clear();
    }
    return 0;
}
