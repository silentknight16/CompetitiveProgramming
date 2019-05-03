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
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<q;i++)
    {
        int g;
        cin>>g;
        if(g==0)
        {
            ll l,r;
            cin>>l>>r;
            if(a[r-1]==0)
                cout<<"EVEN\n";
            else
                cout<<"ODD\n";
        }
        else
        {
            ll k;
            cin>>k;
            if(a[k-1]==0)
                a[k-1]=1;
            else
                a[k-1]=0;
        }
    }
    return 0;
}