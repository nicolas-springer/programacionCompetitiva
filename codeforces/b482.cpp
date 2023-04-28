
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

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

       int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    double max_d = 0;
    for(int i=1; i<n; i++){
        max_d = max(max_d, double(a[i] - a[i-1]));
    }

    max_d = max(max_d/2, double(max(a[0], l-a[n-1])));
    cout << fixed << setprecision(10) << max_d << endl;

    return 0;
}
