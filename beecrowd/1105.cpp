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
   // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int b,n;

    while(cin>>b>>n &&b!=0 && n!=0){

        vector<int> vb(b);
        forn(i,b)vb[i]=i+1;
        //cout<<"vb"<<bn;
       // forall(it,vb)cout<<*it<<" ";
        //cout<<bn;
        //cout<<"vr"<<bn;
        vector<int> vr(b);
        forn(i,b)cin>>vr[i];
        //forall(it,vr)cout<<*it<<" ";
        //cout<<bn;


        vector<vector<int>> vdc;
        vector<int> aux;
        int d,c,v;
        forn(i,n){
            cin>>d>>c>>v;
            aux.pb(d);
            aux.pb(c);
            aux.pb(v);
            vdc.pb(aux);
            aux.clear();
        }

        forn(i,n){
            d=vdc[i][0];
            c=vdc[i][1];
            v=vdc[i][2];

            vr[d-1]-=v;
            vr[c-1]+=v;

        }
        bool ok =true;
        forn(i,b){

            if(vr[i]<0){
                ok=false;
                break;
            }
        }
        ok ? cout<<"S"<<bn : cout<<"N"<<bn;

    }



    return 0;
}

