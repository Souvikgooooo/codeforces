#include <bits/stdc++.h>
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
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll c,d;
        c=max(a,b);
        d=a+b-c;
        if(c==0&&d==0){
            cout<<"0"<<endl;
        }
        else if(d!=0){
            ll cnt=(log2(c/d));
            for(int i=0;i<cnt;i++) d*=2;
            if(d!=c) cnt++;
            cout<<cnt+c<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
return 0;
        }