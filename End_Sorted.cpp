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
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,p,q,ans=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) p=i;
            if(a[i]==n) q=i;
        }
        if(p==0&&q==n-1) ans=0;
        else if(p!=0&&q==n-1) ans=p;
        else if(p==0&&q!=n-1) ans=n-(1+q);
        else {
            ans=n-1-q+p;
            if(q<p) ans-=1;
        }
        cout<<ans<<endl;
    }
    return 0;
    }