#include<iostream>

using namespace std;

void selectionsort(int arr[], int n, int index = 0) {
    // base case
    if (index == n - 1) {
        return;
    }

    // find minimum element in the remaining unsorted array
    int min_index = index;
    for (int j = index + 1; j < n; j++) {
        if (arr[j] < arr[min_index]) {
            min_index = j;
        }
    }

    // swap the found minimum element with the first element
    swap(arr[min_index], arr[index]);

    // recursive call for the rest of the array
    selectionsort(arr, n, index + 1);
}

int main() {
    int arr[6] = {23, 12, 45, 1, 1, 0};
    int n = 6;

    selectionsort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
