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
    //ios_base::sync_with_stdio(0);
   // cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int x,y;
        string s;
        int i = 0;
        while(getline(cin,s)){
            cin>>s;
            cin.ignore();
            if(count(s.begin(),s.end(),'#')==1){
                x = i+1;
                y = (int) s.find('#') + 1;
                cout<<x<<" "<<y<<bn;
                break;
            }
            //cout<<s<<bn;
            i++;
        }

    }

    return 0;
}

