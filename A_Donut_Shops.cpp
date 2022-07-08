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
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    long long a,b,c,f,s;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;

        if(a < c){
            f = 1;
        }
        else{
            f=-1;
        }
        if(a*b > c){
            s = b;
        }
        else{
            s=-1;
        }
        cout<<f<<" "<<s<<endl;
    }

    return 0;
}
/* int main(){
    int t;
    cin>>t;
    long long a,b,c,sol,ans;
    while(t--){
        sol=-1;
        ans=-1;
        cin>>a>>b>>c;
        if(a<c){
            sol=1;
        }
         if((a*b)>c){
            ans=b;
        }
        cout<<sol<<" "<<ans<<endl;
    }
    return 0;
}
*/
