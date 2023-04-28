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
    //ios_base::sync_with_stdio(0);
   // cin.tie(0); cout.tie(0);

    int x, n, k, m;
   /* while(cin>>n>>k>>m && n!=0 && k!=0 && m!=0){
        cout<<n<<" "<<k<<" "<<m<<bn;
        list<int> l;
        l.clear();
        for(int i = 1; i<=n; i++){
            l.pb(i);
        }
        //forall(itx,l)cout<<*itx<<" ";
        //cout<<bn;
        auto ik = l.end();
        auto im = l.begin();
        int iter=1;
        while(l.size()>1){

            //cout<<"iter: "<<iter<<bn;
            //cout<<"s: "<<l.size()<<bn;
            //cout<<"ik entro apunt: "<<*ik<<bn;
            forn(i,k){
                if(ik==l.end() || ik==prev(l.end())){
                    ik=l.begin();
                }
                else{
                    ik++;
                }
                //cout<<"ik:"<<*ik<<bn;
            }
            //cout<<"im entro apunt: "<<*im<<bn;
            forn(i,m){
                if(im==l.begin()){
                    im=l.end();
                    im--;
                }
                else{
                    im--;
                }
               // cout<<"im:"<<*im<<bn;
            }
            if(*ik != *im){
                cout<<"  "<<*ik<<"  "<<*im<<",";
            }
            else{
                cout<<" "<<*ik<<",";
            }
            ik= l.erase(ik);
            if(*ik==*im){
                ik=next(im);
            }
            im= l.erase(im);


            if(ik==l.begin()){
                ik=prev(l.end());
            }
            else{
                ik--;
            }

            if(im==l.end()){
                im=l.begin();
            }
            iter++;
            //cout<<"size: "<<l.size()<<bn;
            if(l.size()<=1){
                cout<<" "<<*(l.begin())<<bn;
                break;
            }
        }
    }*/

    while(cin>>n>>k>>m && n!=0 && k!=0 && m!=0){

        vector<int> a(n);
        vector<pair<int,int>> res;
        int c=0;
        int ik=0;
        int im=
        while(c!=n){



        }





    }

    return 0;
}
