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

    int n,m,k;
    cin>>n>>m>>k;

    vector<int> v(n);
    vector<int> op(3);
    vector<vector<int>> vo;
    vector<int> ik(2);
    vector<vector<int>> vk;

    forn(i,n)cin>>v[i];

    forn(i,m){
        forn(i,3)cin>>op[i];
        vo.pb(op);
    }
    forn(i,k){
        forn(i,2)cin>>ik[i];
        vk.pb(ik);
    }




    return 0;
}

