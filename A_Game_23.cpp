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
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main(){
    ll t,n;
    cin>>n>>t;
    if(t%n!=0) return cout<<"-1"<<endl,0;

    ll div=t/n;
    ll ans=0;
    while(div%2==0){
        ans++;
        div/=2;
    }
    while(div%3==0){
        ans++;
        div/=3;
    }
    if(div==1) cout<<ans<<endl;
    else cout<<"-1"<<endl;
    return 0;
}