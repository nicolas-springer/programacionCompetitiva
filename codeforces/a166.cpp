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
	
	int n,k;
	cin>>n>>k;
	int x,y;
	map<pair<int,int>,int> m;
	vector<pair<int,int>> v;
	forn(i,n){
		cin>>x>>y;
		v.pb(mp(x,y));
	}
	sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b){
		if(a.first!=b.first){
			return a.first > b.first;
		}
		else{
			return a.second < b.second;
		}
	});
	pair<int,int> aux;
	aux.first = v[k-1].first;
	aux.second= v[k-1].second;
	
	int a,b;
	forn(i,n){
		if(v[i].first==aux.first && v[i].second==aux.second){
			a=i+1;
			i++;
			while(v[i].first==aux.first && v[i].second==aux.second){
				i++;
			}
			b=i;
			cout<<b-a+1<<bn;
			return 0;
		}
		
	}
	
	
	return 0;
}


