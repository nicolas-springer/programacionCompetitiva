
#include <bits/stdc++.h>
using namespace std;
/* clang-format off */
/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }
/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define bn "\n"
//#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

/* clang-format on */
/* Main()  function */
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif

    int tc;
    tc = read(int);

    while(tc--){
        //write(tc);
    }*/

    double x, sum;
    int c=0;
    bool f = false;
    while(!f){
        while(c!=2)
        {
         cin>>x;
         if(x>=0.0 && x<=10.0){
            sum+=x;
            c++;
         }
         else{
            cout<<"nota invalida"<<bn;
         }
        }
        cout<<"media = "<<fixed<<setprecision(2)<<sum/2<<bn;
        c=0;
        sum=0.0;
        bool t=true;
        while(t){
            cout<<"novo calculo (1-sim 2-nao)"<<bn;
            cin>>x;
            if(x==2.0){
                    f = true;
                    t = false;
            }
            else{
                if(x==1.0){
                    t = false;
                }
            }
        }

    }

    return 0;
}
/* Main() Ends Here */


