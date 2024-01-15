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
        string s;
        string f;
        getline(cin, s);
        getline(cin, f);
        int numOneInS = 0;
        int numOneInF = 0;
        int numDifPos = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != f[i]) {
                numDifPos++;
                if (s[i] == '1') {
                    numOneInS++;
                }
                if (f[i] == '1') {
                    numOneInF++;
                }
            }
        }
        int numOneDif = abs(numOneInS - numOneInF);
        int numOneMove = (numDifPos - numOneDif) / 2;
        cout << numOneMove + numOneDif << endl;
    }
}