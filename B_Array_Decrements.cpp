#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int a[n],b[n];
	for (int i = 0; i < n; i++) {
		cin>>a[i];
        cin>>b[i];
    }
        int c=a[0]-b[0];
        for (int i = 0; i < n; i++) {
            if(a[i]-b[i]<0){
                cout<<"NO"<<endl;
                count++;
                break;
            }
            else if(a[i]-b[i]>1&&a[i]-b[i]>c){
             cout<<"NO"<<endl;
             count++;
             break;
        }
        else if(a[i]-b[i]>1&&a[i]-b[i]<c){
            cout<<"NO"<<endl;
             count++;
             break;
        }
        if(count==0){
            cout<<"YES"<<endl;
        }
    }
}
return 0;
}