#include<iostream>
#include<bits/stdc++.h>
#include<ios>

using namespace std;

long long composite3(long long num) {
    return (num * (num - 1) * (num - 2)) / 6;
}

long long composite2(long long num) {
    return (num * (num - 1)) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--) {
        long long num;
        cin >> num;
        vector<int>array(num + 1, 0);
        for (long long i = 0; i < num; i++) {
            long long x;
            cin >> x;
            array[x]++;
        }
        long long result = 0;
        long long previous = 0;
        for (long long i = 0; i <= num; i++) {
            if (array[i] >= 3) {
                result += composite3(array.at(i));
            }
            if (array[i] >= 2) {
                result += composite2(array[i]) * previous;
            }
            previous += array[i];
        }
        cout << result << endl;
    }
    return 0;
}