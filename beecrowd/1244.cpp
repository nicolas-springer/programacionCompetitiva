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
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }

struct stringComparator {
    bool operator()(string s1, string s2){
        if (s1.length() != s2.length()) {
            return s1.length() > s2.length();
        }
        else{
            return s1 < s2;
        }
    }
};

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string line,w;

        getline(cin,line);
        stringstream ss(line);
        vector<string> vs;
        set<string,stringComparator> v;

        while(ss>>w){
            v.insert(w);
        }
        forall(it,v)cout<<*it<<" ";
        cout<<bn;
        /*while(ss >> w){
            vs.pb(w);
        }
        sort(vs.begin(),vs.end(),[](string a, string b){
            return a.size() >= b.size();
             });
        for(int i=0; i<vs.size()-1;i++){
            cout<<vs[i]<<" ";
        }
        cout<<vs[vs.size()-1]<<bn;*/
    }

    return 0;
}

