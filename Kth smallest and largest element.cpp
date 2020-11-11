#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int k;
    cin>>k;
    int max = a[k-1];
    int min = a[n-k];
    cout<<max<<" "<<min<<endl;
    
    return 0;
}
