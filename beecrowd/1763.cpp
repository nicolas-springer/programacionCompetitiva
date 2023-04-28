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
	
	string s;
	map<string, string> m;
	
	m["brasil"]= "Feliz Natal!";
	m["alemanha"]=  "Frohliche Weihnachten!";
	m["austria"]= "Frohe Weihnacht!";
	m["coreia"]="Chuk Sung Tan!";
	m["espanha"]="Feliz Navidad!";
	m["grecia"]="Kala Christougena!";
	m["estados-unidos"]="Merry Christmas!";
	m["inglaterra"]="Merry Christmas!";
	m["australia"]="Merry Christmas!";
	m["portugal"]="Feliz Natal!";
	m["suecia"]= "God Jul!";
	m["turquia"]="Mutlu Noeller";
	m["argentina"]="Feliz Navidad!";
	m["chile"]= "Feliz Navidad!";
	m["mexico"]="Feliz Navidad!";
	m["antardida"]="Merry Christmas!";
	m["canada"]= "Merry Christmas!";
	m["irlanda"] ="Nollaig Shona Dhuit!";
	m["belgica"]="Zalig Kerstfeest!";
	m["italia"]="Buon Natale!";
	m["libia"]="Buon Natale!";
	m["siria"]="Milad Mubarak!";
	m["marrocos"]="Milad Mubarak!";
	m["japao"]="Merii Kurisumasu!";
	
	while(cin>>s){
		auto it = m.find(s);
		if(it!=m.end())cout<<m[s]<<bn;
		else cout<<"--- NOT FOUND ---"<<bn;
	}
	
	return 0;
}


