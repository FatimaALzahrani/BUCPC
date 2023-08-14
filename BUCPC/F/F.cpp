#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    int re = 0;
    int count = 0;

    for (int i = 0; i < 2; i++) {
        int sum = 0;
        for (int j = 0; j < T; j++) {
            int n;
            cin >> n;
            sum += n;
        }
        if (i == 0) {
            re = sum;
            count++;
        } else if (re == sum) {
            count++;
        }
    }
    
    if (count == 2)
        cout << "fair" << endl;
    else
        cout << "not fair" << endl;

    return 0;
}
