#include"bits/stdc++.h"
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<class x>
using ordered_set = tree<x, null_type,less_equal<x>, rb_tree_tag,tree_order_statistics_node_update>;

#define int long long
#define endl '\n'
#define mod 1000000007
//\
#define mod 1686876991

struct Trie {
    Trie *adj[26];
    int V;
    Trie () {
        V = 0;
        for (int i = 0 ; i < 26 ; i++) {
            adj[i] = nullptr;
        }
    }
};

vector<vector<Trie*>> ptr;

Trie *Root;

int LCP (int i, int leni, int j, int lenj) {
    int l = 0, r = min(leni, lenj) + 1;
    while (r - l > 1) {
        int m = (l + r) / 2;
        if (ptr[i][m] != ptr[j][m]) r = m;
        else l = m;
    }
    return r - 1;
}

signed main () {
    // cin.tie(0)->sync_with_stdio(0);

    int tt;
    cin >> tt;
    while (tt--) {
        Root = new Trie();
        int n, m, q;
        cin >> n >> m >> q;

        ptr.assign(n + 1, vector<Trie*>(m + 1, 0));
        for (int i = 1 ; i <= n ; i++) {
            char c;
            Trie* cur = Root;
            for (int j = 1 ; j <= m ; j++) {
                cin >> c;
                if (!cur -> adj[c - 'a']) cur -> adj[c - 'a'] = new Trie();
                cur = cur -> adj[c - 'a'];
                ptr[i][j] = cur;
            }
        }


        if (n < m) {

            vector<int> Cost(n + 1);

            // int Prec[n + 1][n + 1];
            vector<vector<int>> Prec(n + 1, vector<int>(n + 1));

            for (int i = 1 ; i <= n ; i++) {
                Prec[i][i] = m;
                for (int j = i + 1 ; j <= n ; j++) Prec[i][j] = Prec[j][i] = LCP(i, m, j, m);
            }

            while (q--) {
                int t;
                cin >> t;
                if (t == 1) {
                    int i;
                    cin >> i;
                    cout << Cost[i] << endl;
                } else {
                    int i, leni, j, lenj;
                    cin >> i >> leni >> j >> lenj;
                    int P = min({Prec[i][j], leni, lenj});
                    if (P == 0) continue;
                    for (int k = 1 ; k <= n ; k++) {
                        int P2 = max(min(Prec[i][k], leni), min(Prec[j][k], lenj));
                        Cost[k] += max(0ll, P2 - P + 1);
                    }
                }
            }

        } else {

            while (q--) {
                int t;
                cin >> t;
                if (t == 1) {
                    int i;
                    cin >> i;
                    int Sum = 0;
                    for (int j = 1 ; j <= m ; j++) Sum += ptr[i][j] -> V;
                    cout << Sum << endl;
                } else {
                    int i, leni, j, lenj;
                    cin >> i >> leni >> j >> lenj;

                    int P = LCP(i, leni, j, lenj);
                    if (P == 0) continue;
                    for (int k = P ; k <= leni ; k++) ptr[i][k] -> V++;
                    for (int k = P + 1 ; k <= lenj ; k++) ptr[j][k] -> V++;
                }
            }

        }

    }
}