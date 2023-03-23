

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};

    int k = 3;

    while (k > 0)
    {
        int temp = arr[0];
        for (int i = 0; i < arr.size(); i++)
        {

            arr[i] = arr[i + 1];
        }
        arr[arr.size() - 1] = temp;
        k--;
    }
    
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}