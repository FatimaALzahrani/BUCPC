#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        vector<int> Ar;
        int tmp = 0;
        int key = 0;
        int count = 0;
        int k = n;
        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;
            Ar.push_back(num);
        }

        while (true) {
            for (int j = 0; j < Ar.size(); j++) {
                if (Ar[j] < tmp) {
                    tmp = Ar[j];
                    key = j;
                }
            }

            for (int i = key; i < n; i++)
            {
                Ar.pop_back();
            }
            count++;
            if (Ar.empty()) {
                break;
            }
        }

        if (count % 2 == 0) {
            cout << "Hoor" << endl;
        } else {
            cout << "Majd" << endl;
        }
    }

    return 0;
}
