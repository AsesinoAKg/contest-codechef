// shree ganeshay namah
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
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

ll anuragmax(ll x, ll y, ll z)
{
    return max(x, max(y, z));
}
ll anuragmin(ll x, ll y, ll z)
{
    return min(x, min(y, z));
}
ll akgcd(ll x, ll y)
{
    return __gcd(x, y);
}

int main()
{
    ll akcase;
    cin >> akcase;
    while (akcase--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> vs;
        vs.push_back(1);
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                vs.push_back(i + 1);
            }
        }
        vs.push_back(n);
        ll ans = 0;
        ll cnnt;
        for (int i = 1; i < vs.size(); i++)
        {
            cnnt = vs[i] - vs[i - 1] + 1;
            ans += (cnnt * (cnnt + 1)) / 2;
        }
        ans -= (vs.size() - 2);
        cout << ans << endl;
    }
    return 0;
}
