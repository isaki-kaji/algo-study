#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, P[1009];
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> P[i];
    }

    int count = 0;
    bool repeat_flag = true;

    while (repeat_flag) {
        for (int i = 1; i <= N; i++) {
            if (P[i] % 2 == 0) {
                P[i] = P[i] / 2;
            } else {
                repeat_flag = false;
                break;
            }
        }
        count += 1;
    }

    cout << count << endl;
}
