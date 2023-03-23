

#include <iostream>
#include <vector>
using namespace std;

vector<int>  spiralPrint(vector<vector<int>> arr)
{

    // ans array
    vector<int> ans;

    // number of rows and cols
    int m = arr.size();
    int n = arr[0].size();

    // number of elements
    int total_elements = m * n;
    int count = 0;

    // starting and ending rows and cols for matrix traversal
    int starting_row = 0;
    int starting_col = 0;
    int ending_row = m - 1;
    int ending_col = n - 1;

    // traverse until last element
    while (count < total_elements)
    {

        // printing starting row
        for (int i = starting_col; i <= ending_col && count < total_elements; i++)
        {
            ans.push_back(arr[starting_row][i]);
            // cout << arr[starting_row][i] << " ";
            count++;
        }
        starting_row++; // incrementing starting row count

        // printing ending col
        for (int i = starting_row; i <= ending_row && count < total_elements; i++)
        {
            ans.push_back(arr[i][ending_col]);
            // cout << arr[i][ending_col] << " ";
            count++;
        }
        ending_col--; // decrementing ending col count

        // printing ending row
        for (int i = ending_col; i >= starting_col && count < total_elements; i--)
        {
            ans.push_back(arr[ending_row][i]);
            // cout << arr[ending_row][i] << " ";
            count++;
        }
        ending_row--; // decrementing ending row count

        // printing starting col
        for (int i = ending_row; i >= starting_row && count < total_elements; i--)
        {
            ans.push_back(arr[i][starting_col]);
            // cout << arr[i][starting_col] << " ";
            count++;
        }
        starting_col++; // incrementing starting col count
    }
    return ans;
}

int main()
{

    vector<vector<int>> a = {{7}, {9}, {6}};
    vector<int> ans = spiralPrint(a);

    for (auto it : ans)
        cout << it << " ";
    cout << endl;
    return 0;
}