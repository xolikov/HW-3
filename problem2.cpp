#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int t;
        cin >> t;
        while (t > 0) {
            cout << t % 10 << ' ';
            t /= 10;
        }
        cout << endl;
    }
    return 0;
}
