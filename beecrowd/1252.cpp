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
int mx;
bool compare(int a,int b,int mx){
	//int mod_a = abs(a) % mx;
	//int mod_b = abs(b) % mx;
	int mod_a = a % mx;
	int mod_b = b % mx;
	// Si los números tienen el mismo módulo, aplicamos las siguientes reglas:
	if (mod_a == mod_b) {
		// Si a y b son ambos pares o ambos impares, los ordenamos según su valor
		if (a % 2 == b % 2) {
			if (a % 2 == 0) {
				return a < b;
			} else {
				return a > b;
			}
			// Si a es impar y b es par, a precede a b
		} else {
			return a % 2 > b % 2;
		}
		// Si los números tienen diferentes módulos, los ordenamos según su módulo
	} else {
		return mod_a < mod_b;
	}
	/*if(a%mx > b%mx){
		return a;
	}
	if(a%mx < b%mx){
		return b;
	}
	if(a%2!=0 && b%2==0){//igual modulo
		return a;
	}
	if(b%2!=0 && a%2==0){
		return b;
	}
	if(a%2!=0 && b%2!=0){
		return a>b;
	}
	if(a%2==0 && b%2==0){
		return a<b;
	}
	return true;*/
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,m;
    while(cin>>n>>m){
	mx=m;
    if(n==0 && m==0){
        cout<<"0 0"<<bn;
        return 0;
    }
	cout<<n<<" "<<m<<bn;
    vector<int> v(n);
    forn(i,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),[m](int a, int b) { return compare(a, b, m); });
    forall(it,v){
        cout<<(*it)<<bn;
    }
    }

    return 0;
}
