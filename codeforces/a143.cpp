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

    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;

    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            for(int h=1; h<=9; h++){
                for(int k=1; k<=9; k++){
                    if((i!=j && i!=h && i!=k && j!=h && j!=k && h!=k)
                       && r1==i+j && r2==h +k && c1==i+h && c2==j+k
                       && d1==i+k && d2==j+h){
                        cout<<i<<" "<<j<<bn;
                        cout<<h<<" "<<k<<bn;
                    return 0;
                    }
                }
            }
        }
    }
    cout<<-1<<bn;
    /*
    i j
    h k
    */
    return 0;
}

