#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    for (int i = 1; i <= N; ++i) {
        int new_X = (2 * X + Y + 1) % MOD;
        int new_Y = (X + 3 * Y + 1) % MOD;

        X = new_X;
        Y = new_Y;
    }

    cout << X << endl;
    cout << Y << endl;

    return 0;
}
