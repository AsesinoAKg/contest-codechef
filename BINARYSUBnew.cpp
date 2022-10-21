//shree ganeshay namah
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

long long int func(int anur, string& s, vector<int>& arr1, map<string, string>& hhcc, string current, set<string>& sweet, long long int mod){
    if(anur < 0){
        auto it = sweet.find(current);
        if(it == sweet.end()){
            sweet.insert(current);
            return 1;
        }
        return 0;
    }
    
    if(arr1[anur] != -1) return arr1[anur];
    
    long long int tt1 = func(anur-1, s, arr1, hhcc, hhcc[s.substr(anur, 1)+current], sweet, mod);
    long long int tt2 = 0;
    if(anur-1 >= 0 &&  hhcc.find(s.substr(anur-1, 2)) != hhcc.end())
        tt2 = func(anur-2, s, arr1, hhcc, hhcc[s.substr(anur-1, 2)]+current, sweet, mod);
    return arr1[anur] = (tt1+tt2) % 998244353;
    
}

long long int solve(){
    string s;
    cin >> s;
    long long int n = s.length();
    vector<int> arr1(n, -1);
    map<string, string> hhcc {{"a", "01"}, {"b",  "10"}, {"ab" , "010"}, {"ba" , "101"}};
    set<string> sweet;
    cout << func(n-1, s, arr1, hhcc, "", sweet, 998244353) << endl;
    return 0;    
}

int main() {
  long long int t;
  cin >> t;
  while(t--){
      solve();
  }
  return 0;
}
