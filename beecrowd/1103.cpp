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

    int h1,m1,h2,m2;
    int m=0;
    while(cin>>h1>>m1>>h2>>m2){
        if(h1==0 && m1==0 && h2==0 && m2==0) break;
        m=0;
        if(h1==h2){
            if(m1==m2){
                cout<<24*60<<bn;
            }
            else if(m2>m1)cout<<m2-m1<<bn;
            else cout<<(24*60)-(m1-m2)<<bn;
        }
        else if(h1>h2){
            if(m1==m2){
                cout<<(24-h1+h2)*60<<bn;
            }
            else if(m2>m1){
                cout<<(23-h1+h2)*60+ (60+m2-m1)<<bn;
            }
            else{
                cout<<(23-h1+h2)*60 + (60-m1+m2)<<bn;
            }
        }
        else {
            if(m1==m2){
                cout<<(h2-h1)*60<<bn;
            }
            else{  if(m2>m1){
                cout<<(h2-h1)*60 + (m2-m1)<<bn;
                }
                else{//m1>m2
                cout<<(h2-h1-1)*60 + (60-m1+m2)<<bn;
                }
            }
        }

    }



    return 0;
}

