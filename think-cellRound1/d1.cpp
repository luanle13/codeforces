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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        string s;
        int n;
        cin >> n;
        cin.ignore();
        getline(cin, s);

        s = " " + s;
        vector<ll> f(1000);
        ll ans = 0;

        for (int i = n; i >= 1; i--) {
            if (s[i] == '1') f[i] = n + 1 - i + (i + 3 <= n ? f[i + 3] : 0);
            else f[i] = i + 1 <= n ? f[i + 1] : 0;
            ans += f[i];
        }

        cout << ans << endl;
    }
}