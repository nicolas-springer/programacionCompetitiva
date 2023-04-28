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

    int n;
    string s;

    cin>>n;
    int sum=0;
    while(n--){
        cin>>s;
        if(s=="Tetrahedron"){
            sum+=4;
        }
        if(s=="Cube"){
            sum+=6;
        }
        if(s=="Octahedron"){
            sum+=8;
        }
        if(s=="Dodecahedron"){
            sum+=12;
        }
        if(s=="Icosahedron"){
            sum+=20;
        }
    }
    cout<<sum<<bn;
    return 0;
}

