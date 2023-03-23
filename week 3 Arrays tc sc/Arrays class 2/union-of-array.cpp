

#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int> a, vector<int> b)
{

    // create new array/vector
    vector<int> ans;

    // copy all elements from vector a
    for (auto i = 0; i < a.size(); i++)
    {
        ans.push_back(a[i]);
    }

    // copy all elements from vector b
    for (auto i = 0; i < b.size(); i++)
    {
        ans.push_back(b[i]);
    }
    return ans;
}

void printArray(vector<int> arr)
{
    for (auto i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> a{1, 2, 3, 4, 5};
    vector<int> b{7, 8, 9, 0};

    vector<int> ans = unionArray(a, b);

    printArray(a);
    printArray(b);
    printArray(ans);

        return 0;
}