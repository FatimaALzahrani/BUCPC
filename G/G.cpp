#include "bits/stdc++.h"
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n, p;
    queue<int> q;
    while (cin >> n, n)
    {
        for (int i = 1; i <= n; i++)
        {
            q.push(i);
        }
        cout << "Discarded cards:";
        while (q.size() > 1)
        {
            cout << " " << q.front();
            q.pop();
            p = q.front();
            q.pop();
            if (!q.empty())
                cout << ",";
            q.push(p);
        }
        cout << "\nRemaining card: " << q.front() << endl;
        q.pop();
    }
}