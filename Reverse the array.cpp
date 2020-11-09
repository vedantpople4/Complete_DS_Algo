#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

void reverse(int arr[], int start, int end)
{
	if(start>=end)
	return;
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	
	reverse(arr, start+1, end-1);
}

void printarr(int arr[], int k)
{
	for(int i=0;i<k;i++)
	cout<<arr[i]<<" "<<endl;
}



int main()
{
    int n,temp=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    reverse(arr,0,n-1);
    printarr(arr,n);

    return 0;
}
