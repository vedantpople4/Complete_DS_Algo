#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		vector <int> v;
		for(int i=0;i<n;i++) {
		cin>>a[i];
		v.push_back(a[i]);
		}
		for(int i=0;i<m;i++) cin>>b[i];
		for(int i=0,it=v.begin();i<m,it!=v.end();i++,it++){
			if(b[i]!=v[it])
			v.push_back(b[i]);
		}
		for(int i=v.begin();i!=v.end();i++) cout<<v[i]<<endl;
		

	}
	
	
	return 0;
}
