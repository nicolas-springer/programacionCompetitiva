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

    char p = s[0];
    int c=1;
    bool f=true;
    for(int i=1; i< s.size();i++){
        if(p!=s[i]){
            c=1;
            p=s[i];
        }
        else c++;
         if(c>=7){
            cout<<"YES"<<bn;
            f=false;
            break;
         }
    }
    if(f)cout<<"NO"<<bn;
    return 0;
}
