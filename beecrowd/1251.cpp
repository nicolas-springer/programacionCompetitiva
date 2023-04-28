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
    bool p=false;

    while(getline(cin,s)){
        if(p){
            cout<<bn;
        }
        else{
            p=true;
        }
        unordered_map<int,int> mi;

        for(char c : s){
            mi[c]+=1;
        }

        vector<pair<int,int>> aux(mi.begin(),mi.end());
        sort(aux.begin(),aux.end(),[](const pair<int,int>& a, const pair<int,int>& b){

             if(a.second==b.second) return a.first>b.first;

             return a.second < b.second;
             });

        for(auto e : aux){
            cout<<e.first<<" "<<e.second<<bn;
        }

    }

    return 0;
}

