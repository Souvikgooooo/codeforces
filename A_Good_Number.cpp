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
int a[10];
int main(){
    int n,k;
    cin>>n>>k;
    vector<string>v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.pb(s);
    }
    int sol=0,ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=k;j++){
            if(v[i].find(to_string(j))!=-1)
            sol++;
        }
        if(sol==k+1)
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}