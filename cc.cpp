#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define eb                    emplace_back
#define ull                   unsigned long long
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int64 alu(int a, int b){
    if(a%b==0)
    return a/b;
    else
        return (a/b)+1;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m,o,ans=0,soll;
    cin>>n>>m>>o;
    //int sol=n-m;
    soll=min(n,alu(o,m));
    if(m*soll<=o){
        for(int i=0;i<soll;i++)
        ans+=pow(m,2);
    }
    else{
        if(o!=0){
            if((o-m)>0){
                ans+=pow(m,2);
                o-=m;
            }
            else{
                ans+=o;
                o=0;
            }
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}