#include <iostream>
using namespace std;

int solve(int n) {
    int ans = 0;
    while (n != 0) {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int tmp = solve(i);
        if (tmp >= a && tmp <= b) ans += i;
    }
    cout << ans;
    return 0;
}
