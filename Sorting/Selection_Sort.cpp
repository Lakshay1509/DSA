// C++ program for implementation of
// selection sort
#include <bits/stdc++.h>
using namespace std;

// Function for Selection sort
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of
	// unsorted subarray
	for (i = 0; i < n - 1; i++) {

		// Find the minimum element in
		// unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}

		// Swap the found minimum element
		// with the first element
		if (min_idx != i)
			swap(arr[min_idx], arr[i]);
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

// Driver program
int main()
{
	int arr[127] = {178 , 191, 350, 493, 680, 873, 1016, 1180, 1315, 1468, 1665, 1783, 1926, 2051, 2158, 2303, 2452, 2646, 2808, 2984, 3114, 3256, 3400, 3574, 3688, 3877, 3996, 4129, 4315, 4461, 4660, 4795, 4946, 5105, 5294, 5465, 5615, 5780, 5959, 6151, 6326, 6489, 6659, 6815, 6922, 7050, 7215, 7382, 7487, 7658, 7758, 7943, 8125, 8252, 8381, 8538, 8721, 8876, 9005, 9161, 9276, 9459, 9625, 9731, 9869, 10057, 10233, 10348, 10493, 10594, 42, 165, 359, 485, 632, 812, 1005, 1132, 1272, 1420, 1559, 1705, 1815, 1920, 2076, 2183, 2353, 2514, 2620, 2794, 2991, 3129, 3252, 3410, 3538, 3725, 3898, 4054, 4237, 4341, 4470, 4661, 4827, 4927, 5082, 5212, 5360, 5506, 5703, 5825, 5998, 6103, 6237, 6359, 6514, 6671, 6817, 6973, 7080, 7263, 7458, 7613, 7801, 7984, 8097, 8223, 8399};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function Call
	selectionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}

// This is code is contributed by rathbhupendra
