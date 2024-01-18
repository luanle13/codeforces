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
        int m;
        cin >> m;
        while (m--) {
            int x, y;
            int coin = 0;
            cin >> x >> y;
            x--;
            y--;
            if (x < y) {
                for (int i = x; i < y; i++) {
                    if (i == 0) {
                        coin += 1;
                    } else {
                        coin += abs(a[i] - a[i+1]) < abs(a[i] - a[i-1]) ? 1 : abs(a[i] - a[i+1]);
                    }
                }
            } else if (x == y) {
                coin = 0;
            } else {
                for (int i = x; i > y; i--) {
                    if (i == n-1) {
                        coin += 1;
                    } else {
                        coin += abs(a[i] - a[i+1]) > abs(a[i] - a[i-1]) ? 1 : abs(a[i] - a[i-1]);
                    }
                }
            }
            cout << coin << endl;
        }
    }
}