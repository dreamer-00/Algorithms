#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int errors = 0;
        for (int i = 0; i + 1 < s.size(); i++) {
            if (s[i] == s[i + 1]) errors++;
        }
        cout << (errors <= 2 ? "YES\n" : "NO\n");
    }
    return 0;
}