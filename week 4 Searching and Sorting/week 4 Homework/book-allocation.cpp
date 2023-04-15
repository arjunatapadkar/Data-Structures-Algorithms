

#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int totalBooks, int totalStudent, int mid){

    int currPages = 0;
    int studentCount = 1;

    for(int i = 0; i < totalBooks; i++){
        if(arr[i] > mid){
            // if the min number of pages that can be allocated is less than single book pages i.e the book can't be splitted
            return false;
        }
        else if(currPages + arr[i] > mid){
            // if currpages value is greater than min pages can be allocated to student allocate the next book to next student
            currPages = arr[i];
            studentCount++;

            if(studentCount > totalStudent){
                // if student count exceeds total students
                return false;
            }
        }
        else{
            // allocate another book to same student until it exceeds min pages limit
            currPages += arr[i];
        }
    }
    return true;
}

int allocate(vector<int> arr, int totalStudent){
    
    int start = 0;
    int totalBooks = arr.size();
    int totalPages = 0;

    for(auto it: arr){totalPages = totalPages + it;};

    int end = totalPages;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(isPossible(arr, totalBooks, totalStudent, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }

    return ans;

}

int main(){

    vector<int> arr = {12, 34, 67, 90};
    int m = 2;

    vector<int> arr2 = {1,2,3,4,5,6,7,8,9,10};
    int m2= 5;

    int ans = allocate(arr, m);
    int ans2 = allocate(arr2, m2);

    cout << ans << endl;
    cout << ans2 << endl;

    return 0;
}