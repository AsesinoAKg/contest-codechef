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

long long anurag(long long b,long long n1){
    long long s=1;
    while (n1)
    {
        if(n1%2==1)s=s*b%mod;
        b=b*b%mod;
        n1/=2;
    }
    return s;
}

long long inv(int x){
    return anurag(x,mod-2);
}

int n1,m,s,q[3],rr[3];
void resulta(){
    cin>>n1>>m;
    q[0]=(vector<int>{2,1,-1,-2,-1,1}[n1%6]+anurag(2,n1))*inv(3)%mod;
    q[1]=(vector<int>{-1,1,2,1,-1,-2}[n1%6]+anurag(2,n1))*inv(3)%mod;
    q[2]=(vector<int>{-1,-2,-1,1,2,1}[n1%6]+anurag(2,n1))*inv(3)%mod;
    rr[0]=(vector<int>{2,1,-1,-2,-1,1}[m%6]+anurag(2,m))*inv(3)%mod;
    rr[1]=(vector<int>{-1,1,2,1,-1,-2}[m%6]+anurag(2,m))*inv(3)%mod;
    rr[2]=(vector<int>{-1,-2,-1,1,2,1}[m%6]+anurag(2,m))*inv(3)%mod;
    cout<<((q[0]*rr[0]+q[1]*rr[1]+q[2]*rr[2])%mod+mod-1)%mod<<endl;
}
signed main()
{


    int t;
    cin>>t;
    while(t--)
    {
        resulta();
    }
    return 0;
}
