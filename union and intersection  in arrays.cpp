#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define testcase long long t; cin>>t;


void printUnion(int a[], int b[], int n, int m){
	set<int> hs;
	for(int i=0;i<n;i++) hs.insert(a[i]);
	for(int i=0;i<m;i++) hs.insert(b[i]);
	for(auto it = hs.begin(); it!=hs.end(); it++) cout<< * it <<" ";
	cout<<endl;
}

void printIntersection(int a[], int b[], int n, int m){
	set<int> hs;
	for(int i=0;i<n;i++) hs.insert(a[i]);
	for(int i=0;i<m;i++)
	if(hs.find(b[i]) != hs.end())
	cout<<b[i]<<" ";
}
int main()
{
testcase;
while(t--){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	printUnion(a , b, n, m);
	printIntersection(a, b, n ,m);
}
	
	
	return 0;
}
