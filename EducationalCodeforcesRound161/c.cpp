#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> absDiff(n - 1);
        partial_sum(a, a + n - 1, absDiff.begin(), [](int x, int y) { return abs(x - y); });

        int m;
        cin >> m;
        while (m--) {
            int x, y;
            cin >> x >> y;
            x--;
            y--;

            if (x < y) {
                cout << absDiff[y - 1] - (x > 0 ? absDiff[x - 1] : 0) << endl;
            } else if (x > y) {
                cout << absDiff[x - 1] - (y > 0 ? absDiff[y - 1] : 0) << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
