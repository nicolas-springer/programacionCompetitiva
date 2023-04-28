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
    vector<string> vec;
    vector<char> res;
    string s,line;

    while(cin>>n && n!=-1){
        /*//cin.ignore();
        getline(cin,line);
        stringstream iss(line);
        string lista;
        while(iss >> lista){
            vec.pb(lista);
        }*/
        string s;
        forn(h,n-1){
            cin>>s;
            vec.pb(s);
        }
       // for(int i = 0; i<n-1; i++ ){
        //    cout<<vec[i]<<" ";
        //}
        bool match=true;
        while(match){
           // cout<<match<<bn;
            match=false;
            for(int i=0; i<n-1;i++){
               // cout<<vec[i]<<" 0: "<<vec[i][0]<<bn;
                if(!(vec[i].size()==0) && vec[i][0]=='1'){
                    match=true;
                    res.pb((i+2)+'0');
                    ///cout<<"invento: "<<(i+2)+'0'<<bn;
                   // cout<<vec[i][0]<<bn;
                    vec[i].erase(0,1);
                }
            }
            if(!match){
                for(int j=0; j<n-1;j++){
                    if(!(vec[j].size()==0)){
                        int aux = vec[j][0] - '0';

                        char paux = (j+2) + '0';
                        //cout<<"paux : "<<paux<<bn;
                        if(!(vec[aux-2].size()==0)
                           && (vec[aux-2][0]==paux)){
                            vec[j].erase(0,1);
                            vec[aux-2].erase(0,1);
                            match=true;
                            break;
                        }
                    }
                }
            }
           // cout<<"match : "<<match<<bn;
        }


        for(int i = 0; i<res.size(); i++){
            cout<<res[i];
        }
        cout<<bn;
        vec.clear();
        res.clear();
    }



    return 0;
}
