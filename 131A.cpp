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
    string s;
    cin>>s;
    char c;
    bool check=true;
    for(int i=1;i<s.length();i++){
        if(islower(s[i])){
       check=false;
        }
    }
    if(check==true){
    for(int j=0;j<s.length();j++){
        if(islower(s[j]))
        c=toupper(s[j]);
        else  c=tolower(s[j]);
        cout<<c;
    }
    }
    else
    cout<<s<<endl;
    return 0;
}