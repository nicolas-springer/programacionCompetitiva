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

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    int c;
    long double m;
    while(getline(cin,s) && s!="*"){
        c=0; m=0;
        int i=1;
        while(i<s.size()){
            if(s[i]=='/'){
                //cout<<"M: "<<m<<bn;
                if(m==1)c++;
                m=0;
            }
            if(s[i]=='W'){
                m+=1.0;
            }
            if(s[i]=='H'){
                m+=(1.0/2);
            }
            if(s[i]=='Q'){
                m+=(1.0/4);
            }
            if(s[i]=='E'){
                m+=(1.0/8);
            }
            if(s[i]=='S'){
                m+=(1.0/16);
            }
            if(s[i]=='T'){
                m+=(1.0/32);
            }
            if(s[i]=='X'){
                m+=(1.0/64);
            }
            i++;
        }
        cout<<c<<bn;




    }

    return 0;
}

