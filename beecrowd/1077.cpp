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

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;

    cin>>t;
    string s;

    while(t--){
        cin>>s;
        int i = 0, n=s.size();
        int ca=0,imp=0;
        stack<char> op;
        while(i<n){
            if(s[i]=='('){
                ca++;
                i++;
                while(s[i]=='('){
                    ca++;
                    i++;
                }
                while(i<s.size()){

                    if(s[i]==')'){
                        ca--;
                    }
                    else if(s[i]=='+' || s[i]=='*' || s[i]=='-' || s[i]=='/'){
                        op.push(s[i]);
                    }
                    else{
                        cout<<s[i];
                        imp++;
                        if(imp==2){
                        imp=0;
                        cout<<op.top();
                        op.pop();
                        }
                    }
                    i++;
                }

            }
            else if(s[i]=='+' || s[i]=='*' || s[i]=='-' || s[i]=='/'){
                    op.push(s[i]);
                    }
                else{
                    cout<<s[i];
                    imp++;
                    if(imp==2){
                        imp=0;
                        cout<<op.top();
                        op.pop();
                    }
            }
            i++;
        }
        cout<<bn;

    }

    return 0;
}

