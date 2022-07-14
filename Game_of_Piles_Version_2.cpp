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
    RASENGAN
    int t;
    cin>>t;
    while(t--){
        ll n,p=0,q=0,r=0,sum=0,sol=0;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) r++;
        else{
            if(a[i]==2) q++;
            sum+=a[i];
            sol++;
            if(a[i]&1) p++;
        }
        }
        if(r==1){
            if(p%2==0)
                cout<<"CHEF"<<endl;
                if(q==0)
                cout<<"CHEFINA"<<endl;

                sum-=2;
                sol--;
                if((sum-sol)&1)  cout<<"CHEFINA"<<endl;
                else cout<<"CHEF"<<endl;
        }
        else if(r>1){
            if((sum-sol)&1) cout<<"CHEF"<<endl;
            else cout<<"CHEFINA"<<endl;
        }
        if(p&1) cout<<"CHEF"<<endl;
        else cout<<"CHEFINA"<<endl;
    }
    return 0;
}