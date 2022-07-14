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
        int n,x;
        cin>>n>>x;
            if(x>ceil(n*1.0/2)){
                cout<<-1<<endl;
            }
            else{
                vector<char>vec;
                for(int i=0;i<n/2;i++){
                    vec.pb((char)('a'+i%x));
                }
                for(int i=0;i<n/2;i++){
                    cout<<vec[i];
                }
                if(n%2) cout<<((char)('a'+(n/2)%x));
                for(int i=n/2-1;i>=0;i--){
                    cout<<vec[i];
                }
                cout<<endl;
            }
        }
        return 0;
        }