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
#define stoupper(str) transform(str.begin(), str.end(), str.begin(), ::toupper)
#define bn '\n'
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin>>s;

    if(s.size()==1){
        if(islower(s[0])){
            stoupper(s);
                cout<<s<<bn;
        }
        else {stolower(s);cout<<s<<bn;}
        return 0;
    }

    bool p=false, tmp=true , tu=true;;
    p=islower(s[0]);

    for(int i=0; i<s.size(); i++){
        if(islower(s[i])){
            tu=false;
            break;
        }
    }

    if(tu){//primera
        stolower(s);
        cout<<s<<bn;
        return 0;
    }

    if(p){ //segunda
    tu=true;
        for(int i=1; i<s.size(); i++){
        if(islower(s[i])){
            tu=false;
            break;
        }
        }

        if(tu){
            transform(s.begin()+1,s.end(),s.begin()+1, [](char c) {
            return std::tolower(c);
            });
            s[0]=toupper(s[0]);
            cout<<s<<bn;
            return 0;
        }
    }

    cout<<s<<bn;

    return 0;
}

