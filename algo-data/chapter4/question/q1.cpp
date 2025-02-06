#include <iostream>
#include <vector>
using namespace std;

long long tribo(int N, vector<long long> &memo) {
    if (N == 0 || N == 1) {
        return 0;
    }
    if (N == 2) {
        return 1;
    }

    if (memo[N] != -1) {
        return memo[N];
    }

    return memo[N] = tribo(N - 1, memo) + tribo(N - 2, memo) + tribo(N - 3, memo);
}

int main() {
    vector<long long> memo;
    int N = 10;
    memo.assign(N + 1, -1);

    cout << tribo(N, memo) << endl;
}
