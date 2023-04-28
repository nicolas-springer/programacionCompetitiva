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

    string s;
    cin>>s;
    vector<char> v;
    for(int i=0; i<s.size(); i++){
        char c = tolower(s[i]);
        if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'))v.pb(tolower(c));
    }
    if(v.empty()){
        cout<<bn;
        return 0;
    }
    forn(j,v.size()){
        cout<<"."<<v[j];
    }
    cout<<bn;
    return 0;
}

