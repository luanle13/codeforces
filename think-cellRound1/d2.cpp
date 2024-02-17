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
        vector<ll> f(1e7);
        ll ans = 0;

        f.assign(n + 1, 0);

        for (int i = n; i >= 1; i--) {
            if (s[i] == '1') {
                ll calc = 0;
                if (i + 3 <= n) calc = f[i + 3];
                f[i] = n + 1 - i + calc;
            }
            else {
                ll calc = 0;
                if (i + 1 <= n) calc = f[i + 1];
                f[i] = calc;
            }
            ans += f[i];
        }

        cout << ans << endl;
    }
}