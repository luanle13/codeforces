#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, f, a, b;
        cin >> n >> f >> a >> b;
        long long last = 0;
        bool isEnough = true;

        for (int i = 0; i < n; i++) 
        {
            long long time;
            cin >> time;
            if (!isEnough) continue;
            f -= min(b, (time - last) * a);
            if (f <= 0) {
                isEnough = false;
            }
            last = time;
        }
        cout << (isEnough ? "YES" : "NO") << endl;
    }
}