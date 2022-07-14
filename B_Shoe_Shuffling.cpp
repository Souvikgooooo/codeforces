#include<bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void printArray (int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
void randomize (int arr[], int n)
{
	srand (time(NULL));
	for (int i = n - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		swap(&arr[i], &arr[j]);
	}
}
int main()
{
    int t;
    cin>>t;
    while(t--){
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	randomize (arr, n);
	printArray(arr, n);
    }
	return 0;
}

// This code is contributed by
// rathbhupendra
