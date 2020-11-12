#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=0,c=0;
    cin>>n;
    int k[n];
    for(int i=0;i<n;i++) {
        cin>>k[i];
        if(k[i]==2) c++;
        else if (k[i]==1) b++;
        else a++;
    }
     while(c!=0){
        cout<<2<<" ";
        c--;
    }
    while(b!=0){
        cout<<1<<" ";
        b--;
    }
    while(a!=0){
        cout<<0<<" ";
        a--;
    }
    return 0;
}
