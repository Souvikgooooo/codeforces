#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                  pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define eb                    emplace_back
#define ull                   unsigned long long
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    int n,L,a;
    int x,y;
    int res=0,sol=0;
    cin>>n>>L>>a;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        //if(x-y>=a) 
        res+=(x-sol)/a;
        sol=x+y;
    }
    res+=(L-sol)/a;
    cout<<res<<endl;
    return 0;
}