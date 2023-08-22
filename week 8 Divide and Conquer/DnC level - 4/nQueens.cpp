

#include<iostream>
#include<vector>
using namespace std;

void printSolution(vector<vector<char>> &board, int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl  << endl;
}

// checking the position to place the queen is safe or not 
bool isSafe(vector<vector<char>> &board, int n, int row, int col){

    int i = row;
    int j = col;
    // for row left
    while(j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }
        i = row;
        j = col;
    // for upperleftdiagonal
    while(i >= 0 && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
        i--;
    }
        i = row;
        j = col;
    // for bottomleftdiagonal
    while(i < n && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
        i++;
    }

    return true;

}

void placeQueen(vector<vector<char>> &board, int n, int col){

    // Base Case : solution found
    if(col >= n){
        printSolution(board, n);
        return;
    }

    // 1 case - recursion 
    for(int row=0; row < n; row++){

        // 
        if(isSafe(board, n, row, col)){

            // place the queen
            board[row][col] = 'Q';

            placeQueen(board, n, col+1);

            // backtrack the solution
            board[row][col] = '-';

        }
    }



}


int main(){

    // vector<vector<char>> board

    int n = 4;
    vector<vector<char>> board(n, vector<char> (n, '-'));
    int col = 0;
    placeQueen(board, n, col);



    return 0;
}
