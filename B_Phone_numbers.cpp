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
    int n,sol;
    string s;
    while(cin>>n){
        cin>>s;
        if(n%2==0) sol=2;
        else sol=1;
        cout<<s[0];
        ll size=s.length();
        if(sol==1){
        for(int i=1;i<size;i++){
            if(i%2==0&&i<=size-3){
                cout<<"-";
            }
                cout<<s[i];
        }
        }
            else {
                 for(int i=1;i<size;i++){
            if(i%2==0&&i<=size-2){
                cout<<"-";
            }
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}