#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        vector<char> result;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                result.push_back(alphabet[j]);
            }
        }
        for (auto letter : result) {
            cout << letter;
        }
        cout << endl;
    }
}