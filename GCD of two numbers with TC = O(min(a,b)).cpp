#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
ll GCD(ll a,ll b)
{
    ll result=min(a,b);
    while(result>0)
    {
        if(a%result==0 && b%result==0)
        {
            break;

        }
        result--;
    }
    return  result;
}
int main()
{
    optimize();
    ll a,b;
    cin>>a>>b;
    ll ans= GCD(a,b);
    cout << "GCD of " << a << " and " << b << " is = "<<ans<<endl;
}