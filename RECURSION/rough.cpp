// C++ code to sort 2D 
// matrix row-wise
#include <bits/stdc++.h>
using namespace std;
#define M 4
#define N 4

int sortRowWise(int m[M][N])
{
// One by one sort 
// individual rows.
for (int i = 0; i < M; i++)
	sort(m[i], m[i] + N);

// Printing the sorted matrix
for (int i = 0; i < M; i++) 
{
	for (int j = 0; j < N; j++)
	cout << (m[i][j]) << " ";
	cout << endl;
}
}

// Driver code
int main()
{
int m[M][N] = {{9, 8, 7, 1},
				{7, 3, 0, 2},
				{9, 5, 3, 2},
				{6, 3, 1, 2}};
sortRowWise(m);
}

// This code is contributed by gauravrajput1
