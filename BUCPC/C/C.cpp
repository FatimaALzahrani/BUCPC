#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int key = v.at(0);
        int r = 0;
        // loop عشان نلقى الاكبر
        while (v.size() != 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (v.at(i) > key)
                {
                    key = v.at(i);
                    r = i;
                }
            }

            for (int i = r; i < n; i++)
            {
                v.pop_back();
            }
            sum++;
        }
        if (n % 2 == 0)
        {
            cout << "Hoor" << endl;
        }
        else
        {
            cout << "Majd" << endl;
        }
    }
}
