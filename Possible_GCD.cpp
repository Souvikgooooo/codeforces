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
       int x,y,diff,count=0;
       vector<int>s;
       cin>>x>>y;
       diff=abs(x-y);
           for(int i=1;i<=sqrt(diff);i++){
               if(diff%i==0){
                  if(diff/i==i)  count++;
                  else{
                      count++;
                    s.pb(diff/i);
                  }
           }
           }
           for(int i=s.size()-1;i>=0;i--)
           count++;
           cout<<count<<endl;
    }
    return 0;
}
