#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        vector<long long> d1(n), d2(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        for (int i = 0; i < n; i++) {
            d1[i] = abs(a[i] - b[i]);
        }

        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++) {
            d2[i] = abs(a[i] - b[i]);
        }

        for (int i = 1; i < n; i++) {
            d1[i] = d1[i - 1] + d1[i];
        }
        for (int i = 1; i < n; i++) {
            d2[i] = d2[i - 1] + d2[i];
        }

        long long ans = max(d1[n - 1], d2[n - 1]);
        for (int i = 0; i < n; i++) {
            if (n - i - 2 < 0) break;

            long long foo = d1[i] + d2[n - i - 2];

            if (foo > ans) {
                ans = foo;
            }
        }

        cout << ans << endl;
    }
}