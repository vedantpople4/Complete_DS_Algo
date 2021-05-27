// Code Written by Pinaki Bhattacharjee (pinakipb2)
#include<bits/stdc++.h>
using namespace std;

// typedef
typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

// #define
#define LOCAL
#define endl "\n"
#define PI 2*acos(0.0)
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define mpr make_pair
#define all(x) (x).begin(),(x).end()
#define ppc __builtin_popcountll
#define pinakipb2 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// constants
const int MAX = 1e9 + 10;
const int MOD = (int) 1e9 + 7;

map<ll,ll> dp;

ll func(ll n)
{
    if(n<=0) return 0;
    if(dp[n]!=0) return dp[n];
    ll ans = max({n,func(n/2) + func(n/3) + func(n/4)});
    return dp[n] = ans;
}

int main()
{
    pinakipb2;
    
    ll n;
    while(cin>>n)
    {
        dp.clear();
        cout<<func(n)<<endl;
    }
    
    return 0;
}