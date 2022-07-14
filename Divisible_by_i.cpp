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
        int n;
       cin>>n;
       if(n%2==0){
               int i=n/2;
                int j=i+1;
                while(i!=0){
               cout<<j<<" "<<i<<" ";
               j++;
               i--;
           }
           cout<<endl;
       }
       else{
               int i=n/2;
                int j=i+1;
                while(i!=0){
               cout<<j<<" "<<i<<" ";
               j++;
               i--;
           }
           cout<<j<<" "<<endl;
       }
    }
    return 0;
}