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


    int n,token;
    string name;
    while(cin>>n && n!=0){
        list<pair<string,int>> l;
        forn(k,n){
        cin>>name>>token;
        l.pb(mp(name,token));
        }
        auto ix = l.begin();
        int m=ix->second;
        while(l.size()>1){
            if(m%2==0){
                forn(i,m){
                    if(ix==l.begin()){
                    ix=prev(l.end());
                    }
                    else{
                        ix--;
                    }
                }
                //cout<<"borro: "<<ix->first<<" "<<ix->second<<bn;
                m=ix->second;
                ix = l.erase(ix);
                if(l.size()==1)break;

                if(m%2==0){
                    if(ix==l.end()){
                        ix=l.begin();
                    }
                }
                else{
                    if(ix==l.begin()){
                        ix=prev(l.end());
                    }
                    else{
                        ix--;
                    }
                }


            }
            else{
                forn(i,m){
                    if(ix==l.end() || ix==prev(l.end())){ //se borro al ultimo o anteultimo en la iteracion anterior
                        ix=l.begin();
                        //ix++;
                    }
                    else{
                        ix++;
                    }
                }
               //cout<<"borro: "<<ix->first<<" "<<ix->second<<bn;

                m=ix->second;
                ix = l.erase(ix);
                if(l.size()==1)break;

                if(m%2==0){
                    if(ix==l.end()){
                        ix=l.begin();
                    }
                }
                else{
                    if(ix==l.begin()){
                        ix=prev(l.end());
                    }
                    else{
                        ix--;
                    }
                }

            }
        }
        cout<<"Vencedor(a): "<<l.begin()->first<<bn;

    }

    return 0;
}
