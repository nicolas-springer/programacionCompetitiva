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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    string res="",aux="";
    // encaralo con deques pq hay que insertar al principio y al final
    while(cin>>s){
        res="";
        aux="";
        int i =0,ca=0;
        while(i<s.size()){
            if(s[i]=='['){
                ca++;
                i++;
                while(ca>0 && i<s.size()){
                    //cout<<i<<": res: "<<res<<" aux:"<<aux<<bn;
                    if(s[i]=='['){
                        ca++;
                        res+=aux;
                        aux="";
                    }
                    else{
                        if(s[i]==']'){
                            ca--;
                            res = aux+res;
                            aux="";
                        }
                        else{
                            aux+=s[i];
                        }
                    }
                    i++;

                }
            }
            else{
                if(s[i]==']'){
                i++;
                }
                else{
                    res+=s[i];
                    i++;
                }
            }
            ca=0;
            aux="";
        }
    cout<<res<<bn;
    }
    /*while(cin>>s){
        deque<char> dq;
        int n=s.size();
        int i=0;
        int ca=0;
        while(i<n){
            ca=0;
            if(s[i]=='['){
                i++;
                ca++;
                while(ca){
                    if(s[i]=='[')ca++;
                    else if(s[i]==']'){
                        ca--;
                    }
                    else{
                        dq.push_front(s[i]);
                    }
                    i++;
                }
            }
            dq.pb(s[i]);
            i++;
        }
        while(dq.size()){
            cout<<dq.front();
            dq.pop_front();
        }
        cout<<bn;
    }
    */
    return 0;
}

