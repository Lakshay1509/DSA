#include <bits/stdc++.h>
using namespace std;

int main()
{
  
    int n;
    int x;
    cin >> n>> x;
    

    vector<int> arr;
    int a;

    for (int i = 0; i < n; i++)
    {

        cin >> a;
        arr.push_back(a);
    }

    int count = 0;
    sort(arr.begin(),arr.end());

    int i =0;
    int j =n-1;

    while(i<=j){
        if(arr[i]+arr[j]==x){
            count++;
            i++;
            j--;

        }

        else{
            count++;
            j--;
        }
    }



    cout << (count) << endl;
}