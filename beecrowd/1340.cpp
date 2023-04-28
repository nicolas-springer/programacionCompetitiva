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



    int n,a,x;

    while(cin>>n){
        queue<int> q;
        stack<int> stk;
        priority_queue<int> pq;
        bool bq=true, bstk=true, bpq=true;

        forn(i,n){
            cin>>a>>x;
            if(a==1){
                q.push(x);
                pq.push(x);
                stk.push(x);
            }
            else{
                if(q.front() != x){
                    bq=false;
                }
                else{
                    q.pop();
                }
                if(pq.top() != x){
                    bpq=false;
                }
                else{
                    pq.pop();
                }
                if(stk.top() != x){
                    bstk=false;
                }
                else{
                    stk.pop();
                }
            }
        }
        if(bq &&  !bpq && !bstk){
            cout<<"queue"<<bn;
        }
        if(!bq &&  bpq && !bstk){
            cout<<"priority queue"<<bn;
        }
        if(!bq &&  !bpq && bstk){
            cout<<"stack"<<bn;
        }
        if(!bq && !bpq && !bstk){
            cout<<"impossible"<<bn;
        }
        if((bq && bpq && !bstk)
           || (!bq && bpq && bstk)
           || (bq && !bpq && bstk)
           || (bq && bpq && bstk)){
            cout<<"not sure"<<bn;
        }
    }
    return 0;
}


