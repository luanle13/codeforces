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
    vector<ll> a(n + 1);
    map<ll, int> counter;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        counter[a[i] + i]++;
    }

    for (int i = 1; i <= n; i++) {
        pair<ll, int> p = *(--counter.end());
        counter.erase((--counter.end()));
        cout << p.first << " ";
        if (p.second > 1) counter[p.first - 1] += p.second - 1;
    }
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