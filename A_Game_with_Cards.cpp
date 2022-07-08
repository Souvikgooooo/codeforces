#include <bits/stdc++.h>
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
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        int maxx1=a[0],maxx2=b[0];
        for(int i=0;i<n;i++){
            if(maxx1<a[i]) maxx1=a[i];
        }
        for(int j=0;j<m;j++){
            if(maxx2<b[j]) maxx2=b[j];
        }
        if(maxx1>=maxx2) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
         if(maxx1>maxx2) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}
//Let the maximum card among all n+m cards be x.

//If only one player has a card of value of x, then he/she can win by playing it on the first turn or on the second turn; 
//the opponent won't be able to respond with any of their cards.

//Otherwise (if both players have a card with value x), 
//the player who plays this card earlier wins the game. So, in this case, the winner is the player who makes the first turn.