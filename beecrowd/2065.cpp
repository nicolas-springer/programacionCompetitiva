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

    int n,m;
    cin>>n>>m;

    vector<int> ca(n);
    vector<>
    vector<int> qc;
    int x;
    forn(i,n){
        cin>>tn[i];
    }
    forn(i,m){
        cin>>x;
        qc.pb(x);
    }
        /*
        v<cleintes>
        v<cajeros>
        pq(tact + v_i * c_j ; i)
            tac=0
            while(sz(fila) || sz(cajero)){

                tact=pq.top().fst();
                1-descoupar cajeros con el menor tiempo de evento
                2-aisgnar cajeros a clientes

            }

            print(tact);
        */
    int t=0;
    priority_queue<pair<int,int>> pq;

    forn(i,n){
        forn(j,m){
           // pq.push({t+(ca[i]*qc[i])})
        }
    }

    while(sz(ca) || sz(qc)){




    }




    return 0;
}

