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
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int flag=0;
    for(int j=0; j<n; j++)
    {
        float k=(double)a[j]/2;
        if((a[j]%2)!=0)
        {
            if(flag==0)
            {
                a[j]=ceil(k);
                flag=1;
            }
            else if(flag==1)
            {
                a[j]=floor(k);
                flag=0;
            }
        }
        else
            a[j]=a[j]/2;
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<endl;
    return 0;
}

/*
at first we have to take number of students
then input an arrray
take a for loop to initialize array
then take flag=0
then start another loop
algo=a[i]/2;
find ceil and floor val of algo
rei9nput 1st array and print a[i]
    */