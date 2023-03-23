

#include <iostream>
#include <vector>
using namespace std;




vector<int> addVectors(vector<int> a, vector<int> b)
{
    vector<int> ans;

    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    int sum = 0;

    while (i >= 0 && j >= 0)
    {
        int sum = 0;
        if (carry == 0)
        {
            sum = a[i] + b[j];
            int digit = sum % 10;
            ans.push_back(digit);
            carry = sum / 10;
            i--;
            j--;
        }
        else
        {
            sum = carry + a[i] + b[j];
            int digit = sum % 10;
            ans.push_back(digit);
            carry = sum / 10;
            i--;
            j--;
        }
    }

    while (i >= 0)
    {
        sum = carry + a[i];
        int digit = sum % 10;
        ans.push_back(digit);
        carry = sum / 10;
        i--;
    }
    while (j >= 0)
    {
        sum = carry + b[j];
        int digit = sum % 10;
        ans.push_back(digit);
        carry = sum / 10;
        j--;
    }
    if (carry > 0)
    {
        ans.push_back(carry);
    }

    reverse(ans);
    return ans;
}

int main()
{

    vector<int> a = {1, 3, 6, 7, 3, 8, 2, 8, 2, 0, 2, 9};
    vector<int> b = {6, 9, 3, 9, 3, 8, 3, 9, 5, 6, 8, 4, 7, 8};
    vector<int> ans = addVectors(a, b);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}