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
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }



int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;

    vector<vector<char>> v(n,vector<char>(n));
    char x;
    forn(i,n){
        forn(j,n){
            cin>>x;
            v[i][j]=x;
        }
    }
    int c=0;
    forn(i,n){
        c=0;
        forn(j,n){
            if (i - 1 >= 0 &&v[i - 1][j] == 'o')
                c++;
            if (i + 1 < n && v[i + 1][j] == 'o')
                c++;
            if(j - 1 >= 0 && v[i][j - 1] == 'o')
                c++;
            if(j + 1 < n &&v[i][j + 1] == 'o')
                c++;
            if (c % 2 == 1){
                no();
                return 0;
            }

        }
    }
    yes();
    return 0;
}

