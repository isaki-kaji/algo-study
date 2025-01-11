#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, P[1009];
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> P[i];
    }

    int max_value = INT_MIN;
    int min_value = INT_MAX;
    for (int i = 1; i <= N; i++) {
        if (P[i] > max_value) {
            max_value = P[i];
        }

        if (P[i] < min_value) {
            min_value = P[i];
        }
    }

    cout << max_value - min_value << endl;
}