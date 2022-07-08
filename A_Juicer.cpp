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
    ll n,b,d,sum=0,sol=0;
    cin>>n>>b>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    if(a[i]<=b){
    sum+=a[i];
    }
    if(sum>d){
        sol+=1;
        sum=0;
    }
}
cout<<sol<<endl;
return 0;
}

