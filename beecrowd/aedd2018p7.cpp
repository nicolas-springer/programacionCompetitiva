#include <bits/stdc++.h>
#define bn '\n'
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<int> v;
    int x;
    for(int i = 0;i<10;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0;i<10;i++){
        cout<<v[i];
    }
    cout<<bn;
    sort(v.begin(),v.end());
    cout<<v[3]+v[4]+v[5]+v[6]+v[7]<<"-"<<(v[0]+v[1]+v[2]+v[8]+v[9])<<endl;


    return 0;
}
