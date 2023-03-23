

#include <iostream>
#include <vector>
using namespace std;

int first_occerrence(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    vector<int> arr = {1, 2, 3, 3, 4, 4, 4, 4, 4, 5, 6, 7, 8, 9};
    int target = 4;
    cout << "first occerrence : " << first_occerrence(arr, target) << endl;

    // in-built function
    auto ans = lower_bound(arr.begin(), arr.end(), 4);
    cout << "lower bound " << ans - arr.begin() << endl;
    return 0;
}