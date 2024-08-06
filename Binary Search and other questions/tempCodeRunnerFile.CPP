#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number of students" << endl;
    int n;
    cin >> n;

    cout << "Enter the weight" << endl;

    int x;
    cin >> x;

    cout << "Enter the students" << endl;

    vector<int> arr;
    int a;

    for (int i = 0; i < n; i++)
    {

        cin >> a;
        arr.push_back(a);
    }

    int count = 1;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] + arr[i + 1] <= x)
        {
            count++;
            i = i + 2;
        }
        else
        {
            count++;
            i++;
        }
    }

    cout << (count) << endl;
}