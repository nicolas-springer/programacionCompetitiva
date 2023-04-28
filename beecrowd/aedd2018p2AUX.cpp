
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

void MuestraMatriz(int matriz[][6]);
bool CumpleTOC(int matriz[][6]);
void CargaBotellas(int matriz[][6]){
    // 0: vacio, 1: botella
    for(int i=0; i<6; i++)
        for(int j=0; j<6; j++)
            matriz[i][j]=0;
    for(int i=1; i<=12; i++){
        int aux= rand()%36;
        matriz[aux/6][aux%6]=1;
    }
}

bool CumpleTOC(int b[6][6]){
    int c=0;
        f(i,0,6){ //diag principal
            if(b[i][i]==1)c++;
            if(c==3){
                cout<<"CUAC"<<bn;
                return false;
            }
        }
        if(c==3)return false;
        c=0;
        f(i,0,6){//diag secund
            if(b[5-i][i]==1)c++;
            if(c==3){
                cout<<"CUAC"<<bn;
                return false;
            }
        }
        if(c==3)return false;
        c=0;
        f(h,0,6){ //filas
            f(k,0,6){
                if(b[h][k]==1)c++;
                if(c==3){
                    cout<<"CUAC"<<bn;
                    return false;
                }
            }
            if(c==3)return false;
            c=0;
        }
        if(c==3)return false;
        c=0;
        f(h,0,6){ //columnas
            f(k,0,6){
                if(b[k][h]==1)c++;
                if(c==3){
                    cout<<"CUAC"<<bn;
                    return false;
                }
            }
            if(c==3)return false;
            c=0;
        }
        if(c==3)return false;
        c=0;
        cout<<"TOC"<<bn;
        return true;
}


int main(int argc, char *argv[]){
    int matriz[6][6];
    srand(time(NULL));
    do
    CargaBotellas(matriz);
    while (!CumpleTOC(matriz));

     for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
                cout<<matriz[i][j]<<" ";
            }
            cout<<bn;
    }
    return 0;
}
