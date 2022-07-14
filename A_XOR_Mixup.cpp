/*
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
        int n;
        cin>>n;
        int a[n];
    int sol = 0;
    for (int i = 0; i < n; i++) {
        sol = sol^a[i];
    }
    cout<<sol<<endl;
    }
    return 0;
} */
#include <bits/stdc++.h>
using namespace std;
int xorOfArray(int arr[], int n)
{
	int xor_arr = 0;
	for (int i = 0; i < n; i++) {
		xor_arr = xor_arr ^ arr[i];
	}
	return xor_arr;
}

// Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
	cout << xorOfArray(arr, n) << endl;
    }
	return 0;
}
