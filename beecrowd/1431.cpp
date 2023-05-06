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
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	/*
	N*T*LOG(K) // usando upperbound
	t1,t2,t3,t4,t5,....t_k -> se divide en basico | avanzado
	*/
	int n; cin >> n;
	while(n != 0){
		vector<ll> marks(1001);
		
		forn(N,n){
			ll k; cin >> k;
			vector<ll> division(k);
			forn(i,k) cin >> division[i];
			sort(division.begin(), division.end());
			
			forn(mark,1001){
				ll basic = (upper_bound(division.begin(), division.end(), mark) - division.begin());
				marks[mark] += abs(basic - (k-basic));
				cout<<marks[mark]<<bn;
			}
		}
			
			ll mini = 0;
			forn(i,1001) if(marks[mini] > marks[i]) mini = i;
			cout << marks[mini] << "\n";
			cin >> n;
	}
	return 0;
}


