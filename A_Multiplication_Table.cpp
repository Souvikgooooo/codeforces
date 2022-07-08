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
   int n,x;
   cin>>n>>x;
   int count=0;
   for(int i=1;i<=n;i++){
       if(x%i==0&&x/i<=n)
       count++;
   }
   cout<<count<<endl;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
	int n;
    cin>>n;
    int arr[n];
	int countOdd = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] % 2)
			countOdd++;
    }
cout<<min(countOdd, n - countOdd)<<endl;;
}
return 0;
}

