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

    int p,a,r;
    while(cin>>p>>a>>r && p!=0 && a!=0 && r!=0){
    string name;
    string res;

    set<string> pearls;
    cin.ignore();
    forn(i,p){
        getline(cin,res);
        pearls.insert(res);
    }

    vector<pair<int, string>> app;

    forn(i,a){
        cin>>name;
        int c=0;
        cin.ignore();
        forn(i,r){
            getline(cin,res);
            if(pearls.find(res) != pearls.end()){
                c++;
            }
        }
        app.pb(mp(c,name));
    }

    //forall(it,pearls)cout<<*it<<bn;

    sort(app.begin(),app.end());

    int mp = app[app.size()-1].first;
    set<string> sol;
    for(auto it=(app.rbegin()++); it!=app.rend(); it++){
        if((int)(it->first) == mp){
            sol.insert(it->second);
        }
        else{
            break;
        }
    }
    if(sol.size()==1){
        cout<<*sol.begin();
    }
    else{
        auto it= sol.begin();
        cout<<*it;
        it++;
        while(it!=sol.end()){
            cout<<", "<<*it;
            it++;
        }
    }
    cout<<bn;
    }
    return 0;
}

