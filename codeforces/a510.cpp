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

    string a="#",b=".";
    bool last=true;

    forn(i,n){


        if(i%2==0){
            forn(j,m)cout<<a;
            cout<<bn;
        }
        else{
            if(last){
                forn(j,m-1)cout<<b;
                cout<<a<<bn;
                last=false;
            }
            else{
                cout<<a;
                forn(j,m-1)cout<<b;
                cout<<bn;
                last=true;
            }
        }


    }

    return 0;
}
