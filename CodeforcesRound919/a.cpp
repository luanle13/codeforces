#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int max = 0, min = 0;
        int noNotEqual = 0;
        vector<int> x1, x2, x3;
        
        for (int i = 0; i < n; i++) {
            int a, x;
            cin >> a >> x;
            if (a == 1) {
                x1.push_back(x);
            } else if (a == 2) {
                x2.push_back(x);
            } else if (a == 3) {
                x3.push_back(x);
            }
        }

        min = x1.empty() ? 1 : *max_element(x1.begin(), x1.end());
        max = x2.empty() ? 1 : *min_element(x2.begin(), x2.end());
        for (int i : x3) {
            if (i >= min && i <= max) {
                noNotEqual++;
            }
        }
        int result = max - min + 1 - noNotEqual;
        result = result > 0 ? result : 0;
        cout << result << endl;
    }
    return 0;
}