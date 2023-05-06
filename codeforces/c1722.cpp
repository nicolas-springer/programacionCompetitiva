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
	
	int t;
	cin>>t;
	
	while(t--){
	
		int n; 
		cin>>n;
		vector<string> v1(n),v2(n),v3(n);
		map<string,int> m;
		for(int i=0; i<n; i++){
			cin>>v1[i];
			m[v1[i]]++;
		}
		for(int i=0; i<n; i++){
			cin>>v2[i];
			m[v2[i]]++;
		}
		for(int i=0; i<n; i++){
			cin>>v3[i];
			m[v3[i]]++;
		}
		//sol
		int x1=0,x2=0,x3=0;
		for(int i=0; i<n; i++){
			
			if(m[v1[i]]==1){
				x1+=3;
			}
			else{
				if(m[v1[i]]==2){
					x1+=1;
				}
			}
			if(m[v2[i]]==1){
				x2+=3;
			}
			else{
				if(m[v2[i]]==2){
					x2+=1;
				}
			}
			if(m[v3[i]]==1){
				x3+=3;
			}
			else{
				if(m[v3[i]]==2){
					x3+=1;
				}
			}
		}
		
		cout<<x1<<" "<<x2<<" "<<x3<<bn;
	}
	
	
	return 0;
}


