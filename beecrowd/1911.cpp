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
#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n,t;

	while(cin>>n && n!=0){
		
		map<string,string> m;
		string a,b;
		forn(i,n){
			cin>>a>>b;
			m[a]=b;
		}
		
		cin>>t;	
		int c=0;
		while(t--){
			cin>>a>>b;
			string aux;
			aux = m[a];
			
			if(aux.size() != b.size()){
				c++;
			}
			else {
				int d=0;
				for(int i=0; i<aux.size();i++){
					if(b[i]!=aux[i])d++;
				}
				if(d>1)c++;
			}
			
		}
		cout<<c<<bn;
	}
	
	return 0;
}


