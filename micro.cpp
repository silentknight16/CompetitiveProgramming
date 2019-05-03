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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll min=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<min)
                min=a[i];
        }
        if(min>=k)
            cout<<0;
        else
        {
            cout<<k-min;
        }
        cout<<"\n";
        
    }
    return 0;
}