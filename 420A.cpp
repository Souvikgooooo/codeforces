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
bool sym(char c){
    return c=='A'||c=='H'||c=='I'||c=='M'||c=='O'||c=='T'||c=='U'||c=='V'||c=='W'||c=='X'||c=='Y';
}
int main(){
    string s,ans="YES";
    cin>>s;
    for(int i=0;i<(1+s.size()/2);i++){
        if(!sym(s[i])||s[i]!=s[s.size()-1-i]){
             ans="NO";
             break;
        }
    }
        cout<<ans<<endl;
        return 0;
}

