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
	
	int n;
	cin>>n;
	vector<int> pos(n);
	list<pair<int,int>> l;
	int r,e;
	forn(i,n){
		cin>>r>>e;
		l.pb(mp(r,e));
	}
	int c=1;
	string s;
	cin>>s;
	while(l.size()>1){
		cout<<"c: "<<c<<bn;
		int i=0;
		auto it=l.begin();
		while(l.size()>1 && it != prev(l.end())){
			
			if((it->first + (it->second * s.size() * c))
				<=(next(it)->first + (next(it)->second * s.size() * c))){
				pos[i+1]=c;
				cout<<"seva +1: "<<i+1<<bn;
				it = l.erase(next(it));
			}
			else{
				pos[i]=c;
				cout<<"seva: "<<i<<bn;
				it=l.erase(it);
				it++;
				}
			i+=2;
		}
		
		c++;
	}
	pos[n-1]=c;
	forall(it,pos) cout<<*it<<" ";
	cout<<bn;
	return 0;
}


