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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt21=n%2020;
        int cnt20=((n-cnt21)/2020)-cnt21;
        if(cnt20>=0&&((cnt21*2021)+(cnt20*2020))==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
} /* according to the question 
            2020*x+2021*y=n
            =>2020x+2020y+y=n
            =>2020(x+y)=n-y
            =>x+y=(n-y)/2020
            =>x=((n-y)/2020)-y
            */