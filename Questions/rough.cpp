#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Function to check if the array is sorted
string isSorted(const vector<int> &arr) {
    int size = arr.size();
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return "No"; // Array is not sorted
        }
    }
    return "Yes"; // Array is sorted
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> A(n);

        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        // Check if the array is sorted
        string result = isSorted(A);
        cout << result << endl;
    }

    return 0;
}
