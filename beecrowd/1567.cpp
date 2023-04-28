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

ll S2(ll n) {
    return n*(n+1)*(2*n+1)/6;
}

ll R2(ll n) {
    return n*(n+1)/2 * n*(n+1)/2;
}

ll S3(ll n) {
    ll s = n*(n+1)/2;
    return s*s*s - S2(n);
}

ll R3(ll n) {
    ll s = n*(n+1)/2;
    ll ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            ans += (n-i+1)*(n-j+1)*i*j;
        }
    }
    return ans;
}

ll S4(ll n) {
    ll s = n*(n+1)/2;
    ll s2 = n*(n+1)*(2*n+1)/6;
    return s2*s2 - S3(n) - 3*s*s2 + 2*S2(n);
}

ll R4(ll n) {
    ll s = n*(n+1)/2;
    ll ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                ans += (n-i+1)*(n-j+1)*(n-k+1)*i*j*k;
            }
        }
    }
    return ans;
}

int main() {
        //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;
    while (scanf("%lld", &n) == 1) {
        ll s2 = S2(n), r2 = R2(n), s3 = S3(n), r3 = R3(n), s4 = S4(n), r4 = R4(n);
        printf("%lld %lld %lld %lld %lld %lld\n", s2, r2, s3, r3, s4, r4);
    }
    return 0;
}

