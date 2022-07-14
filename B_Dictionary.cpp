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
        vector<char>a(2);
        int cnt=0;
        char c='a';
        cin>>a[0]>>a[1];
        cnt+=((a[0])-(int)c)*25;
        cnt+=(a[1])-(int)c+1;
        if(a[0]<a[1])
        cnt-=1;
        cout<<cnt<<endl;
    }
    return 0;
}
