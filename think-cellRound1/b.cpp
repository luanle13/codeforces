#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <functional>
#include <iomanip>
#include <deque>
#include <sstream>
#include <set>
#include <string>

#define oo 1e9
#define ll long long
using namespace std;

void check(vector<int> a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (i != j) {
                if (a[j] % a[i] == 0 && a[j + 1] % a[i + 1] == 0) {
                    cout << "WRONG: " << i << " : "  << j << endl;
                    return;
                }
            }
        }
    }
    cout << "OK\n";
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);

    int value = 1;

    for (int i = 0; i < n; i += 2) {
        arr[i] = value++;
    }
    for (int i = 1; i < n; i += 2) {
        arr[i] = value++;
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    //check(arr);
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;

    while (testcase--) {
        solve();
    }
}