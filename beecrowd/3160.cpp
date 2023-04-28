#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<string> a1;
    vector<string> a2;

    string line;

    getline(cin,line);
    stringstream ss(line);
    string n;

    while(ss >> n ) a1.push_back(n);
    getline(cin,line);
    stringstream ss1(line);

    while(ss1 >> n ) a2.push_back(n);

    string x;
    cin>>x;


    if(x!="nao"){
    for(int i=0; i < a1.size();i++){
        if(a1[i]==x){
            a1.insert(a1.begin()+i,a2.begin(),a2.end());
            break;
        }
    }
    }
    else{
        a1.insert(a1.end(),a2.begin(),a2.end());
    }
    for(int i = 0; i< a1.size()-1; i++){
        cout<<a1[i]<<" ";
    }
    cout<<a1[a1.size()-1]<<endl;
    return 0;
}
