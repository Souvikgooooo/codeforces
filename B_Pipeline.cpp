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
    KAMEHAMEHA 
    int t;
    cin>>t;
    while(t--){
        int n,sol=0,ans=0,snt;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sol+=a[i]%2;
        }
        ans=n-sol;
        if(sol>ans){
            snt=sol-n/2;
            cout<<snt<<endl;
        }
        
        else {
            int cnt=0,cnt1=0;
            vector<int>s;
            for(int i=0;i<n;i++){
                int f=a[i];
                if(f%2) continue;
                while(f%2==0){
                    f/=2;
                    cnt++;
                }
                s.pb(cnt);
            }
            all(s);
            for(int i=0;i<ans-n/2;i++)
            cnt1+=s[i];

            cout<<cnt1<<endl;
        }
    }
    return 0;
}