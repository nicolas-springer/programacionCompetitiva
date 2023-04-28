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
	
	string a,b;
	cin>>a>>b;
	if(a.size()!= b.size()){
		no();
		return 0;
	}
	int c=0;
	set<char> sc;
	for(int i =0;i<a.size();i++){
		
		if(a[i]!=b[i]){
			c++;
			sc.insert(a[i]);
			sc.insert(b[i]);
		}
		
		if(c>2){no(); return 0;}
		
	}
	
	(c==2 && sc.size()==2) ? yes() : no();
	
	return 0;
}


