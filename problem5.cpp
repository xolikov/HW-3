#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnt = 1;
    while (n != 0) {
        if (cnt % 3 != 0 && cnt % 10 != 3) n--;
        cnt++;
    }
    cout << cnt - 1;
    return 0;
}
