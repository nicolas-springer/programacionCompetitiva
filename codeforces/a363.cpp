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

    for(int i=s.size()-1; i>=0;i--){
        //cout<<s[i];
        if(s[i]=='0'){
            cout<<"O-|-OOOO"<<bn;
        }
        if(s[i]=='1'){
            cout<<"O-|O-OOO"<<bn;
        }
        if(s[i]=='2'){
            cout<<"O-|OO-OO"<<bn;
        }
        if(s[i]=='3'){
            cout<<"O-|OOO-O"<<bn;
        }
        if(s[i]=='4'){
            cout<<"O-|OOOO-"<<bn;
        }
        if(s[i]=='5'){//5
            cout<<"-O|-OOOO"<<bn;
        }
        if(s[i]=='6'){
            cout<<"-O|O-OOO"<<bn;
        }
        if(s[i]=='7'){
            cout<<"-O|OO-OO"<<bn;
        }
        if(s[i]=='8'){
            cout<<"-O|OOO-O"<<bn;
        }
        if(s[i]=='9'){
            cout<<"-O|OOOO-"<<bn;
        }
    }

    return 0;
}

