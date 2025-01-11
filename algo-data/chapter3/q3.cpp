#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, P[59];
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> P[i];
    }
    
    int minimum = INT_MAX;
    int second_minimum = INT_MAX;

    for (int i = 1; i <= N; i++) {
        if (P[i] < minimum) {
            minimum = P[i];
            second_minimum = minimum;
            continue;
        }

        if (P[i] < second_minimum) {
            second_minimum = P[i];
        }
    }

    cout << second_minimum << endl;
}