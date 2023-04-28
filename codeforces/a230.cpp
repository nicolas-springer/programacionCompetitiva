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

    int s,n;
    cin>>s>>n;
    int x,y;
    vector<pair<int,int>> d;
    while(n--){
        cin>>x>>y;
        d.pb(mp(x,y));
    }
    sort(d.begin(),d.end(),[](pair<int,int>&a ,pair<int,int>&b){
         return a.first < b.first;
         });
    int i=0;
    while(i<d.size()){
        if(s>d[i].first){
            s+=d[i].second;
        }
        else{
         cout<<"NO"<<bn;
         return 0;
        }
    i++;
    }
    cout<<"YES"<<bn;
    return 0;
}
