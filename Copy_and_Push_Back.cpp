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
bool f(string str){
    int n=str.size();
    if(n==0) return true;
    if(n==1) return true;
    if(n%2!=0){
        return f(str.substr(0,n-1));
    } 
    if(str.substr(0,(n/2))==str.substr((n/2),n)){
    return f(str.substr(0,n/2));
    }
    return false;
}
       /* string a="";
        string b="";
        for(int i=0;i<n/2;i++){
        a.pb(s[i]);
        }
        for(int i=n;i>n/2;i--){
        b.pb(s[i]);
        }
        reverse(b.begin(),b.end());
        if(a==b){
        return f(b);
        }
        return false;
        }
        */
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       string str;
       cin>>str;
       if(f(str)) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}