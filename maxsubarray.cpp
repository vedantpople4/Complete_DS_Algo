#include<bits/stdc++.h>
using namespace std;

int maxsubarray(int a[] , int size){
	int max_sofar = INT_MIN, max_end = 0;
	for(int i=0;i<size;i++){
		max_end = max_end + a[i];
		if(max_sofar < max_end) max_sofar = max_end;
		if(max_end < 0) max_end = 0;
	}
	return max_sofar;
}

int main()
{
	int n; 
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int max = maxsubarray(a,n);
	cout<<max<<endl;
	return 0;
}
