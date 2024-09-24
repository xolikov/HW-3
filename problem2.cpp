#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (char c: s) cout << c << ' ';
        cout << endl;
    }
    return 0;
}
