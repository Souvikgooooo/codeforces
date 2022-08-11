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
int s[16]={
    1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43,  47};

int main(){
    int n,m,cnt=0;
    cin>>n>>m;
    for(int i=0;i<15;i++){
        if(n==s[i]&&m==s[i+1]) cnt++;
        //else cnt=0;
    }
    if(cnt) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}