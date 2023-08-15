#include"bits/stdc++.h"
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<class x>
using ordered_set = tree<x, null_type,less<x>, rb_tree_tag,tree_order_statistics_node_update>;

#define int long long
#define endl '\n'
#define mod 1000000007
//\
#define mod 1686876991

signed main () {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int a[n];
        pair<int,int> v[n];
        int Sparse[n + 1][20];
        for (int i = 0 ; i < n ; i++) {
            cin >> a[i];
            v[i] = {a[i], i};
            for (int j = 0 ; j < 20 ; j++) Sparse[i][j] = n;
        }
        for (int j = 0 ; j < 20 ; j++) Sparse[n][j] = n;
        sort(v, v + n);
        reverse(v, v + n);
        set<int> s = {n};
        vector<int> buf;
        int prev = -1;
        for (int i = 0 ; i < n ; i++) {
            buf.push_back(v[i].second);
            auto it = s.lower_bound(v[i].second);
            if (it != s.end()) Sparse[v[i].second][0] = *it;
            if (i + 1 < n and v[i].first != v[i + 1].first) {
                for (int j : buf) s.insert(j);
                buf.clear();
            }
        }
        for (int j = 1 ; j < 20 ; j++) {
            for (int i = 0 ; i < n ; i++) Sparse[i][j] = Sparse[Sparse[i][j-1]][j-1];
        }
        while (q--) {
            int p, x;
            cin >> p >> x;
            p--;
            for (int i = 0 ; i < 20 ; i++) {
                if (x & (1 << i)) p = Sparse[p][i];
            }
            cout << Sparse[p][0] << endl;
        }
    }
}
