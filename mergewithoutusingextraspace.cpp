#include <bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mpr make_pair
#define andl "\n"
#define f first
#define s second
#define mset(x,y) memset(x,y,sizeof(x))
#define fr(i,h,n) for(long long int i=h;i<n;i++)
#define trace(it,x) for(auto it = (x).begin(); it != (x).end(); it++)
#define mod 1000000007
#define fastio ios::sync_with_stdio (false); cin.tie (0); cout.tie (0);
#define runtime cerr<< '\n' << "Time elapsed :" << clock() * 1000.0 / CLOCKS_PER_SEC << " ms\n" ;
using namespace std;
     
void merge(int m, int n, int a[], int b[]){
	for(int i=0;i<m;i++){
		if(a[i]>b[0]){
			swap(a[i],b[0]);
			int j=0;
			while(j+1<n && b[j]>b[j+1])
			swap(b[j],b[j+1]), j++;
		}
	}
	for(int i=0;i<m;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++) cout<<b[i]<<" ";
	cout<<endl;
	
}    


  
int main()
{
    	int m,n;
    	cin>>m>>n;
    	int a[m],b[n];
    	for(int i=0;i<m;i++) cin>>a[i];
    	for(int i=0;i<n;i++) cin>>b[i];
    	
    	merge(m,n,a,b);
    	
    	
}
