#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        string a;
        string b;
        string c;
        getline(cin, a);
        getline(cin, b);
        getline(cin, c);
        bool temp[n];
        for (int i = 0; i < n; i++) {
            temp[i] = a[i] == b[i];
        }
        bool isExist = false;
        for (int i = 0; i < n; i++) {
            if (temp[i]) {
                if (c[i] == a[i]) {
                    isExist = false;
                } else {
                    isExist = true;
                }
            } else {
                if (c[i] != a[i] && c[i] != b[i]) {
                    isExist = true;
                }
            }
            if (isExist) {
                break;
            }
        }
        string result = isExist ? "YES" : "NO";
        cout << result << endl;
    }
}