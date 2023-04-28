#include <bits/stdc++.h>
using namespace std;

int main(){
   // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int gi=0,gg=0,r=0,pi=0,pg=0,pe=0,c=1;
	cin>>gi>>gg;
	if(gi>gg)pi++;
	else if(gg>gi)gg++;
	else pe++;
	cout<<"Novo grenal (1-sim 2-nao)"<<endl;
	while(cin>>r){
		if(r!=1)break;
		cin>>gi>>gg;
		cout<<"Novo grenal (1-sim 2-nao)"<<endl;
		c++;
		if(gi>gg)pi++;
		else if(gg>gi)pg++;
		else pe++;

	}

	cout<<c<<" grenais"<<endl;
	cout<<"Inter:"<<pi<<endl;
	cout<<"Gremio:"<<pg<<endl;
	cout<<"Empates:"<<pe<<endl;
	if(pi>pg)cout<<"Inter venceu mais"<<endl;
	else if(pi<pg)cout<<"Gremio venceu mais"<<endl;
	else cout<<"Empate"<<endl;
	return 0;

}
