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

#define bn '\n'
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    vector<int> vi;
    int d;
    cin>>n;
    while(n--){
        cin>>d;
        vi.pb(d);
    }

    int c=0;
    int la=-1;
    for(int i=0; i < vi.size() ; i++){
        if(la==-1){
            la=vi[i];
            if(la==0) c++;
            continue;
        }
        if(vi[i]==0){
            la=0;
            c++;
        }
        if(vi[i]==1){
            if(la==1){
                la=0;
                c++;
            }
            if(la==0){
                c++;
                la=1;
            }

            if(la==2)la=1;

        }
        if(vi[i]==2){

            if(la==2){
                c++;
            }
            if(la==1){
                la=2;
            }
            if(la==0){
                c++;
            }
        }
        if(vi[i]==3){
            if(la==1 || la==2){
                if(la==1)la=2;
                else la=1;
            }
            else{
                if(vi[i+1]!=0){
                    if(vi[i+1]==1)la=2;
                    else la=1;
                }
                else{
                    la=0;
                }
            }
        }
       // cout<<"i:"<<i<<"c="<<c<<" ";
        //cout<<"la:"<<la<<bn;
    }
    cout<<c<<bn;

    return 0;
}

