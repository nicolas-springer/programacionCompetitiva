#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    double x,sum=0;
    int l;
    char o;
    cin>>l>>o;
    for(int i=0; i<144; i++){
        cin>>x;
        if(i>=12*(l) && i<12*(l+1)){
            sum+=x;
        }
        else{
            x=0;
        }
    }
    if(o=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else cout<<fixed<<setprecision(1)<<sum/12.0<<endl;
    return 0;
}
