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
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int k,n,x;

    cin>>k>>n;
    vector<int> seq;
    map<int,int> ocur;
    for(int i=0; i<n; i++){
        cin>>x;
        ocur[x]++;
    }

    int c=0,res,res2;
    if(n%k == 0){//-x +y

        for(int i = 1; i<=k;i++){
            if(ocur[i]!=((n)/k)){
                c++;
                if(ocur[i]>((n)/k)){
                    res=i;
                }
                else{
                    res2=i;
                }
            }
        }
        if(c==2){
            cout<<"-"<<res<<" +"<<res2<<bn;
        }
        else{
            cout<<"*"<<bn;
        }

    }
    else if(n%k==(k-1)){//+x
        for(int i = 1; i<=k;i++){
            if(ocur[i]!=((n+1)/k)){
                c++;
                res=i;
            }
        }
        if(c==1){
            cout<<"+"<<res<<bn;
        }
        else{
            cout<<"*"<<bn;
        }
    }
    //3 10
    // 3 3 3 3 3 3 3 3 1 2 > *
    // 3 3 3 2 2 2 1 1 1 1 > -
    else if(n%k==1){//-x
        for(int i = 1; i<=k;i++){
            if(ocur[i]!=((n-1)/k)){
                c++;
                res=i;
            }
        }
        if(c==1){
            cout<<"-"<<res<<bn;
        }
        else{
            cout<<"*"<<bn;
        }
    }
    else{
        cout<<"*"<<bn;
    }


    return 0;
}
