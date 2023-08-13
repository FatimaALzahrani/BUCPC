#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main () {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    const int n = s.size();
    map<string,int> mp;
    for (int i = 0 ; i < n ; i++) {
        mp[s.substr(i,4)]++;
    }
    int sum = 0;

    for (auto mp:mp){
       if(mp.second>=3){
        sum++;
       }
    }
    cout << sum << endl;
}
