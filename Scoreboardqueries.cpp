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
        int n,q; cin >> n >> q;
		int a[n];
		unordered_map<int,int>m;
		for(int i=0;i<n;i++){
			cin >> a[i];
			m[a[i]]++;
		}
		while(q--){
			int l,r; cin >> l >> r;
			int ele=a[l-1];
			a[l-1]=r;
			if(m.count(ele)>0){
				m[ele]--;
				if(m[ele]==0)
				m.erase(ele);
			}
			m[r]++;

			cout << m.size() +1 << '\n';
		}
    }
    return 0;
}
