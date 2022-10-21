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
        int m,n,p;
        int ans=0;
        cin>>m>>n>>p;
        vector<vector<int>> a( n , vector<int> (m, 0));
        vector<vector<int>> ak( n , vector<int> (m, 0));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>a[i][j];
            }
        }
        for (int j = 0; j < m; j++)
        {
            int maxi=0;
            for (int i = 0; j < n; i++)
            {
                if(a[i][j]> maxi){
                cout<<a[i][j]<<endl;
                cout<<a[p-1][j]<<endl;
                maxi = ak[i][j];
                cout<<ak[i][j]<<maxi<<endl;
                }
            }
            ans+=(maxi-a[p-1][j]);
        }
        cout<<"CASE #"<<t<<":"<<" "<<ans<<endl;
    }
    return 0;
}
