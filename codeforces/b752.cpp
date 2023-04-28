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

    string a,b;

    cin>>a>>b;

    map<char,char> mcc;
    if(a==b){
        cout<<0<<bn;
        return 0;
    }
    int c=0;
    char ax,bx;
    for(int i=0; i<a.size();i++){
        if(a[i]!=b[i]){
            ax=a[i];
            bx=b[i];
            if(ax>bx)swap(ax,bx);
           // cout<<"ax: "<<ax<<"find: "<<(mcc.find(ax)== mcc.end())<<bn;
            if(mcc.find(ax) == mcc.end()){
                mcc[ax]=bx;
            }
            else{
                if(mcc[ax]!=bx){
                    cout<<-1<<bn;
                    return 0;
                }
            }
        }
        else{
            if(mcc.find(a[i]) != mcc.end()){
                    cout<<-1<<bn;
                    return 0;
            }
            else{
                mcc[a[i]]=a[i];
                c++;
            }
        }

    }


    cout<<mcc.size()-c<<bn;

    forall(it,mcc){
       if(it->first != it->second) cout<<it->first<<" "<<it->second<<bn;
    }

    return 0;
}

