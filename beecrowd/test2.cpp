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

#define bn '\n'
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int n;
	cin>>n;
	vector<vector<int>> m1(n,vector<int>(n)),m2(n,vector<int>(n));
	
	set<int> ds; // debajo de la seg diagonal de m2
	forn(i,n)forn(j,n)cin>>m1[i][j];
	forn(i,n)forn(j,n)cin>>m2[i][j];
	for(int i = 1; i<n;i++){
		for(int j=n-1; j > n-i-1; j--){
			ds.insert(m2[i][j]);
		}
	}
	for(int i=0; i<n;i++){
		if(ds.find(m1[i][i]) == ds.end() ){ 
			cout<<"no"<<bn;
			return 0;
		}
	}
	cout<<"yes"<<bn;
    return 0;
}
