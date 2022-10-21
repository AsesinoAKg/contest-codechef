//shree ganeshay namah
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int n,m,s;
long long anurag(long long b,long long n){
    long long s=1;
    while (n)
    {
        if(n%2==1)s=s*b%998244353;
        b=b*b%998244353;
        n/=2;
    }
    return s;
}
long long anu(int i,int j){
    return((i/(1<<(j+1)))<<j)+(max(0ll,i%(1<<(j+1))-(1<<j)+1));
}
void resulta(){
    cin>>n>>m;
    s=0;
    for(int i=0; i<31; ++i)
    s=((s+anurag(anu(m,i),n)<<i)%998244353)%998244353;
    cout<<s<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        resulta();
    }
}
