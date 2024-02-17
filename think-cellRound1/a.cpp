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

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n << 1);
    for (int i = 0; i < (n << 1); i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());

    ll sum = 0;

    for (int i = 1; i < (n << 1); i += 2) {
        sum += arr[i];
    }

    cout << sum << endl;

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