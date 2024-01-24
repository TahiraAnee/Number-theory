#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
ll GCD(ll a,ll b)
{
     while(a>0 && b>0)
     {
        if(a>b)
        {
            a=a%b;
        }
        else b=b%a;
     }
     if(a==0)return b;
     else return a;
}
int main()
{
    optimize();
    ll a,b;
    cin>>a>>b;
    ll ans= GCD(a,b);
    cout << "GCD of " << a << " and " << b << " is = "<<ans<<endl;
}