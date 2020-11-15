#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int maxSubarraySum(int a[], int n)
{
	int new_max = a[0];
	int curr_max = a[0];
	for(int i=1;i<n;i++){
		curr_max = max(a[i], curr_max+a[i]);
		new_max = max(new_max, curr_max);
		
	}
	return new_max;
}


int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int ans = maxSubarraySum(a,n);
	cout<<ans<<endl;
	return 0;
	
}
