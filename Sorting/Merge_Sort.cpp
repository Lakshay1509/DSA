#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{

    int mid = start + (end - start) / 2;

    // basic maths
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values

    int mainIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
    }

    // merge arrays

    int index1 = 0;
    int index2 = 0;

    mainIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {

            arr[mainIndex++] = first[index1++];
        }
        else
        {
            arr[mainIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }

    delete []first; 
    delete []second;
}

void mergeSort(int *arr, int start, int end)
{
   
    // base case
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    // left part sorting
    mergeSort(arr, start, mid);

    // right part sorting

    mergeSort(arr, mid + 1, end);

    // merge
    merge(arr, start, end); 
}

int main()
{

    int arr[127] = {178 , 191, 350, 493, 680, 873, 1016, 1180, 1315, 1468, 1665, 1783, 1926, 2051, 2158, 2303, 2452, 2646, 2808, 2984, 3114, 3256, 3400, 3574, 3688, 3877, 3996, 4129, 4315, 4461, 4660, 4795, 4946, 5105, 5294, 5465, 5615, 5780, 5959, 6151, 6326, 6489, 6659, 6815, 6922, 7050, 7215, 7382, 7487, 7658, 7758, 7943, 8125, 8252, 8381, 8538, 8721, 8876, 9005, 9161, 9276, 9459, 9625, 9731, 9869, 10057, 10233, 10348, 10493, 10594, 42, 165, 359, 485, 632, 812, 1005, 1132, 1272, 1420, 1559, 1705, 1815, 1920, 2076, 2183, 2353, 2514, 2620, 2794, 2991, 3129, 3252, 3410, 3538, 3725, 3898, 4054, 4237, 4341, 4470, 4661, 4827, 4927, 5082, 5212, 5360, 5506, 5703, 5825, 5998, 6103, 6237, 6359, 6514, 6671, 6817, 6973, 7080, 7263, 7458, 7613, 7801, 7984, 8097, 8223, 8399};
    int n = 127;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

    cout<<endl;

    
}