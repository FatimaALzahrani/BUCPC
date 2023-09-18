#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    char re = '0';

    for (int i = 0; i < s.length(); i++) {
        int count = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }
        if (count == k) {
            re = s[i];
            break;
        }
    }

    if (re == '0') {
        cout << "NO" << endl;
    } else {
        cout << "YES " << re << endl;
    }

    return 0;
}
