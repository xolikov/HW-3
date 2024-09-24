#include <iostream>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    if (n <= 2) cout << 1;
    else cout << (n - 2 + 2 * x - 1) / x;
    return 0;
}
