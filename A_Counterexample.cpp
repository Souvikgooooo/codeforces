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
int main() {
 ll n1,n2;
    cin>>n1>>n2;
ll diff=n2-n1;
    if(n1==n2||diff==1)
    cout<<"-1"<<endl;
    else if(n1%2==0)
    cout<<n1<<" "<<n1+1<<" "<<n1+2<<endl;
    else if(diff>=3)
    cout<<n1+1<<" "<<n1+2<<" "<<n1+3<<endl;
    else
    cout<<"-1"<<endl;
    return 0;
}