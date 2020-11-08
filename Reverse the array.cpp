#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
    int n,temp=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n/2;i++){
        temp = a[i];
		a[i] = a[i-1];
        
        a[i-1]=temp;
    }
    for(int i=0;i<n;i++)cout<<a[i];

    return 0;
}
