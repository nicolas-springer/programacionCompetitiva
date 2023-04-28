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

    int hi,mi,hf,mf,x,y,z;
    cin>>hi>>mi>>hf>>mf;

    if(hi<hf){
        if(mi==mf){
            z=hf-hi;
            x=0;
        }
        else if(mi>mf){
            x = 60-mi+mf;
            z=hf-hi-1;
        }
        else{
            x=mf-mi+60;
            z=hf-hi;
        }
    }
    if(hi==hf){
        if(mi==mf){
            z=24;
            x=0;
        }
        else if(mi>mf){
            z=23;
            x=60-mi+mf;
        }
        else{
        z=0;
        x = mf-mi;
        }
    }
    if(hf<hi){
        if(mi==mf){
            z=24-hi+hf;
            x=0;
        }
        else if(mi<mf){
            z=24-hi+hf;
            x=mf-mi;
        }
        else{
            z=23-hi+hf;
            x=60-mi+mf;
        }

    }
    //cout<<"primer x: "<<x<<bn;
    y=x/60;//ver si paso 1 hora
    x%=60;//quedarse con los minutos
    //cout<<"y: "<<y<<"min:  "<<x<<bn;
    cout<<"O JOGO DUROU "<<z<<" HORA(S) E "<<x<<" MINUTO(S)"<<bn;

    return 0;
}

