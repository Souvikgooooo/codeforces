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
int alu(int a, int b){
    if(b==0)
        return 1;
        if(b==1)
       return a;
    int sol=alu(a,b/2);
    if(b%2==0)
    return sol*sol;
    return sol*sol*a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string a1,b1;
        cin>>a1>>b1;
        int p=0;
        int q=0;
        int r=a1.size();
        int s=b1.size();
        for(int i=0;i<b1.size();i++){
            if(b1[i]=='a')
            q++;
        }
        if(q==0){
            cout<<alu(2,r)<<endl;
        }
        else if(q==1 && s==1){
            cout<<1<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
    return 0;
}    