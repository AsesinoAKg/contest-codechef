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

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int ans1 = a / x;
        int ans2 = b / y;
        if (a % x == 0 && b % y == 0)
        {
            if (ans1 == ans2)
            {
                cout << "Both" << endl;
            }
            else if (ans1 < ans2)
            {
                cout << "Chef" << endl;
            }
            else
                cout << "Chefina" << endl;
        }
        else{
            if (ans1 < ans2)
            {
                cout << "Chef" << endl;
            }
            else
                cout << "Chefina" << endl;
        }
    }
    return 0;
}
