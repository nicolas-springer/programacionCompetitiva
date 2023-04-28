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

    /*
    procesos : t(cuando llego) y c(duracion)

    se deben ejecutar PRIMERO los de menor tiempo de ejecucion, para minizar,nose porque

    eventos: llegada de procesos y liberacion de cpu, controlar eso

    los ready

    */
    int n,t,c;
    cin>>n;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    forn(i,n){
    cin>>t>>c;
    pq.push({t,c});
    }
    /*forn(i,n){
        cout<<pq.top().first<<bn;
        pq.pop();
    }*/





    return 0;
}

