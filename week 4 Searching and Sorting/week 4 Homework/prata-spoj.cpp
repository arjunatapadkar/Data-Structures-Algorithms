

#include<iostream>
#include<vector>
// #include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool isPossibleSol(vector<int> rank, int np, int mid){

    int currnp = 0;  //initial pratas
   

    for(int i=0 ; i < rank.size(); i++){

        int j = 1;
        int time  = 0;

        while(true){

            if(time  + (rank[i] * j) <= mid){
                ++currnp;
                time = time + (j * rank[i]);
                ++j;
            }
            else{
                break;
            }
        }

        if(currnp >= np){
            return true;
        }

    }    
    return false;

}

int make_prata(vector<int> rank, int np, int nc){

    int start = 0; 
    int hrank = *max_element(rank.begin(), rank.end());

    int end = hrank * ( np * ( np + 1 ) / 2);
    int ans = -1;

    while(start <= end){

        int mid = (start + end ) >> 1;

        if(isPossibleSol(rank, np, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}


int main(){

    vector<int> rank = {1, 2, 3, 4};

    int np = 10;
    int nc = 4;

    int tm = make_prata(rank, np, nc);
    cout << tm << endl;

    return 0;
}