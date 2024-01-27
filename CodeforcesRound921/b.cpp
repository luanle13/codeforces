#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int maxGCD(int x, int n) {
    int start = x / n;
    while (start > 1) {
        if (x % start == 0) {
            return start;
        }
        start--;
    }
    return 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, n;
        cin >> x >> n;
        int result = maxGCD(x, n);
        cout << result << endl;
    }
    return 0;
}