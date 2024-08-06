#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, answer = 0;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int move = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {
            move += (arr[i] - arr[i + 1]); // Calculate the difference directly
            arr[i + 1] = arr[i]; // Set the next element equal to the current element
        }
        else {
            move += (arr[i-1] - arr[i]); // Calculate the difference directly
            arr[i] = arr[i-1]; // Set the next element equal to the current element
        }
    }
    cout << move;
    return 0;
}
