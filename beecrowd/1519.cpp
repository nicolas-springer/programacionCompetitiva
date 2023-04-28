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
	freopen("output.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	string s;
	
	while(getline(cin,s) && s!="."){
		
		vector<string> v;
		map<string,int> ocur;
		map<string,pair<string,int>> abrev_pal_cant; //abrev de la palabra que mas caracteres ahorra
		string word;
		stringstream iss(s);
		while(iss >> word){
			v.pb(word);
			if(word.size()>2){
				ocur[word]++;
			}			
		}
		
		forall(it,ocur){
			string abrv = (it->first).substr(0, 1)+".";
			if(abrev_pal_cant.find(abrv) == abrev_pal_cant.end()){
				int aux_cant = ((it->first).size()-2) * it->second; //caracterces * ocurrencia
				abrev_pal_cant[abrv] = mp(it->first,aux_cant);
			}
			else{
				int aux_cant = ((it->first).size()-2) * it->second;
				//cout<<(it->first).size()<<"*"<<it->second<<" "<<abrev_pal_cant[abrv].second<<bn;
				if(aux_cant > abrev_pal_cant[abrv].second){
					abrev_pal_cant[abrv] = mp(it->first,it->second);
				}
			}
		}
			for(int i = 0; i<v.size(); i++){
				string a = v[i].substr(0, 1)+".";
				if(abrev_pal_cant.find(a)!=abrev_pal_cant.end() 
				   && abrev_pal_cant[a].first==v[i]){
					if(i<v.size()-1)cout<<a<<" ";
					else cout<<a;
				}
				else{
					if(i<v.size()-1)cout<<v[i]<<" ";
					else cout<<v[i];
				}
			}
		cout<<bn;
		cout<<abrev_pal_cant.size()<<bn;
		forall(it,abrev_pal_cant)cout<<it->first<<" = "<<(it->second).first<<bn;
		
		abrev_pal_cant.clear();
		ocur.clear();
		v.clear();
	}
	
	
	
	
	
	
	
	
	/*while(getline(cin,s) && s!="."){
		vector<string> v;
		map<string,string> m;
		stringstream iss(s);
		string word;
		while(iss >> word){
			v.pb(word);
			if(word.size()>2){
				string abrv = word.substr(0, 1)+".";
				if(m.find(abrv)==m.end()){
					m[abrv]=word;
				}
				else{
					if(m[abrv].size() < word.size()){
						m[abrv] = word;
					}
				}
			}			
		}
		
		for(int i = 0; i<v.size()-1; i++){
			string a = v[i].substr(0, 1)+".";
			if(m.find(a)!=m.end() && m[a]==v[i]){
				cout<<a<<" ";
			}
			else{
				cout<<v[i]<<" ";
			}
		}
		if(m.find(v[v.size()-1].substr(0, 1)+".")!=m.end() 
		   && m[v[v.size()-1].substr(0, 1)+"."]==v[v.size()-1]){
			cout<<v[v.size()-1].substr(0, 1)+".";
		}
		else{
			cout<<v[v.size()-1];
		}
		
		
		cout<<bn;
		cout<<m.size()<<bn;
		forall(it,m)cout<<it->first<<" = "<<it->second<<bn;
		
	}
	*/
	
	
	return 0;
}


