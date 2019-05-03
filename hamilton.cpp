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
    fast;
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n-1;i++)
    {
        ll flag=0;
        for(ll j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<a[i]<<" ";
    }
    cout<<a[n-1];
    return 0;
}