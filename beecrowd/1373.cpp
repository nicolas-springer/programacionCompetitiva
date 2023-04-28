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

    int k;
    cin>>k;
    string a,b;

    cin>>a;
    cin>>b;

    int i=0;
    vector<string> va;
    vector<string> vb;

    string aux = "";
    while(i<a.size()-1){
        if(a[i]<a[i+1]){
            aux+=a[i];
            if(aux.size()>=k)va.pb(aux);
        }
        else{
            aux+=a[i];
            if(aux.size()>=k)va.pb(aux);
            aux="";
        }
        i++;
    }
    i=0;
    aux="";
    while(i<b.size()-1){
        if(b[i]<b[i+1]){
            aux+=b[i];
            if(aux.size()>=k)vb.pb(aux);
        }
        else{
            aux+=b[i];
            if(aux.size()>=k)vb.pb(aux);
            aux="";
        }
        i++;
    }
    forall(it,va)cout<<*it<<" ";
    cout<<bn;
    forall(ih,vb)cout<<*ih<<" ";
    return 0;
}
