
#include<iostream>
#include<vector>

using namespace std;


int search_odd_occuring_element(vector<int> v){

    int start = 0;
    int end = v.size() - 1;

    int mid = start + (end - start) / 2;
    
    while(start <= end){

        // first condition
        if(start == end){
            // single element in array or search space
            return start;
        }

        // 2nd condition - 2 cases - mid - even or mid - odd
        if(mid % 2 == 0){
            // mid is even

            if(v[mid] == v[mid + 1]){
                // search in right part
                start = mid + 2;
            }
            else{
                // search in left part but mid might be ans as it is on even index
                end = mid;
            }

        }
        else{
            // mid is odd

            if(v[mid] == v[mid -1]){
                // search in right part
                start = mid + 1;
            }
            else{
                // search in left part
                end = mid - 1;
            }
        }

        // update mid
        mid = start + (end - start) / 2;

    }
    return -1;

}

int main(){

    vector<int> v = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 22, 22, 54, 54};

    int ans = search_odd_occuring_element(v);

    cout << "ind is " << ans << endl;
    cout << "ans is " << v[ans] << endl;

    return 0;
}