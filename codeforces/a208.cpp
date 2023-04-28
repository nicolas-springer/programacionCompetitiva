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

    string s;

    cin>>s;
    int i=0;
    vector<string> v;
    string aux="";
    while(i<s.size()){
        if((i<s.size()-2)&&(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')){
            v.pb(aux);
            aux="";
            i+=3;
        }
        else{
            aux+=s[i];
            i++;
        }
    }
    v.pb(aux);
    forn(j,v.size()-1){
    if(v[j]!="")cout<<v[j]<<" ";
    }
    cout<<v[v.size()-1]<<bn;
    return 0;
}

