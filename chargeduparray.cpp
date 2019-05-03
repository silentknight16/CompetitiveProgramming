#include<bits/stdc++.h>
 
using namespace std;

typedef  long long int ll;
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define mk make_pair
#define vi vector<int>
#define vl vector<ll>
#define pi pair<int>
#define pl pair<ll >
#define vpi vector<pi >
#define vpl vector< pl >
#define fast ios_base::sync_with_stdio(NULL), cin.tie(NULL)
#define m 1000000007

using namespace std;

int main()
{
    ll t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        for(ll i=0;i<n;i++)
        {
            b[i]=(i+1)*(n-i);
        }
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]>=b[i])
            {
                sum=((sum%m)+(a[i]%m))%m;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}