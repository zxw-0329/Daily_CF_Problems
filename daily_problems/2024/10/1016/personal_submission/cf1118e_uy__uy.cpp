#include<bits/stdc++.h>

using namespace std;

using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    //(1,2),(2,1)...,(1,k)(k,1)  2*(k-1)
    //(2,3),(3,2)...,(2,k)(k,2)  2*(k-2)
    i64 cnt = k * 1LL * (k - 1);

    if (cnt < n) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
        int x = 1, y = x + 1;
        int t = (n + 1) / 2;
        for (int i = 0; i < t; i++) {
            cout << x << " " << y << "\n";
            if (n % 2 == 0 || (n % 2 == 1 && i < t - 1)) {
                cout << y << " " << x << "\n";
            }
            y++;
            if (y == k + 1) {
                x++;
                y = x + 1;
            }
        }
    }
    return 0;
}
