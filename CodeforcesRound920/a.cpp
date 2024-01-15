#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x[4], y[4];
        cin >> x[0] >> y[0];
        long int square = -1;
        for (int i = 1; i < 4; i++) {
            cin >> x[i] >> y[i];
            if (x[i] == x[i-1] || y[i] == y[i-1]) {
                square = (abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]))*(abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]));
            }
        }
        cout << square << endl;
        square = -1;
    }
    return 0;
}