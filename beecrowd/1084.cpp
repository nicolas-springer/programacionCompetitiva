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

#define bn '\n'
using namespace std;

int main(){
   //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
    //ios_base::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);


    int n,d;
    bool f=false;
    while(cin>>n>>d){
        if(n==0 && d==0)break;
        list<int> vi;
        string line;
        cin>>line;
        int del=0;
        auto it=vi.begin();
        for(char c : line){
            if(!vi.empty()){
               // cout<<"c:"<<c<<" ";
               // cout<<"it: "<<*it<<bn;
                while(!vi.empty() && del<d && (*it)<(c-'0')){//borrar los menos para que quede el mas significativo a la izquierda
                   // cout<<*it<<"<"<<c<<bn;
                    it = vi.erase(it);
                    //cout<<"dsp: "<<*it<<bn;
                    del++;
                    if(!vi.empty()){
                        it=prev(vi.end());
                    }
                }
            }
            vi.pb(c - '0');
            it=prev(vi.end());
        }
           if(del<d){
                for(int i=del; i<d; i++){
                    vi.erase(prev(vi.end()));
                }
           }
            for(int x: vi){
                cout<<x;
            }
            cout<<bn;
    }

    return 0;
}
