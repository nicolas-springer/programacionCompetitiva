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
   // ios_base::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);

    int n;


    while(cin>>n && n!=0){
        list<int> v;
        forn(i,n){
            v.pb(i+1);
        }
        //forall(it,v)cout<<*it<<" ";
        if(n==13){
            cout<<"1"<<bn;
            continue;
        }
        int m=2;
        bool ok=true;
        while(ok){
            auto it = v.begin();
            it = v.erase(it);
            it = v.begin();
            while(v.size()>1){
                forn(i,m-1){
                it= next(it);
                if(it==v.end())it=v.begin();
                }
               // cout<<*it<<bn;
                it = v.erase(it);
                //cout<<"tam:"<<v.size()<<bn;
                if(it==v.end())it=v.begin();
            }
            //cout<<"tamult :"<<v.size()<<bn;
           // cout<<"ult: "<<*it<<bn;
            //cout<<"utl:2 "<<*(v.begin())<<bn;
            if(*(v.begin())==13) ok=false;
            else{
                m++;
                v.clear();
                forn(i,n){
                v.pb(i+1);
                }
            }
           // system("pause");
        }
        cout<<m<<bn;
    }

    return 0;
}

