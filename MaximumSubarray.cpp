//shree ganeshay namah
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define ll long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int main()
{


    int t;
    cin>>t;
    while(t--)
    {
        int a[100001],b[100001],n,m;
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        cin>>m;
        for (int i = 1; i <= m; i++)
        {
            cin>>b[i];
        }
        int ans=0;
        for (int i = 1,s1=0; i <= n; ++i)
        {
            s1+=a[i];
            ans=max(ans,s1);
        }
        for (int i = n,s1=0; i >= 0; --i)
        {
            s1+=a[i];
            ans=max(ans,s1);
        }
        for(int i=1; i<=m; ++i)
        if(b[i]>=0)
        ans+=b[i];
        cout<<ans<<endl;
    }
    return 0;
}