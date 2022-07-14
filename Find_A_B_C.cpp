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
long long alu(int n){
    ll s=0;
    for(int i=n;i>=1;i--){
        if((i&(i-1))==0){
            s=i;
            break;
        }
    }
    return s;
}
int main(){
    RASENGAN
    int t;
    cin>>t;
    while(t--){
        ll n,sol,ans;
        cin>>n;
        ll a[n+1],res[3]={0,0,0};
        for(int i=0;i<=n;i++){
            cin>>a[i];
        }
        for(int i=alu(n);i>0;i/=2){
            sol=a[i]-a[0];
            if(sol<0){
                sol*=-1;
                ans=sol/i;
                if(ans==1){
                    ans=2;
                    if((res[0]^i)<=n){
                        res[0]^=i;
                        ans--;
                    }
                    if(ans&&(res[1]^i)<=n){
                        res[1]^=i;
                        ans--;
                    }
                    if(ans>0&&(res[2]^i)<=n) res[2]^=i;
                }
                else if(ans==3){
                    res[0]^=i;
                    res[1]^=i;
                    res[2]^=i;
                }
            }
            else{
                ans=sol/i;
                if(ans==1){
                    if((res[0]^i)<=n) res[0]^=i;
                    else if((res[1]^i)<=n) res[1]^=i;
                    else res[2]^=i;
                }
            }
            sort(res,res+3);
        }
        cout<<res[0]<<" "<<res[1]<<" "<<res[2]<<endl;
    }
    return 0;
}