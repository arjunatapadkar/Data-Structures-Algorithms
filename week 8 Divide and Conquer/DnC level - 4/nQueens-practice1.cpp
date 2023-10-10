
#include<iostream>
#include<vector>
using namespace std;

void printBoard(vector<vector<char >> &board, int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}

bool isPossible(vector<vector<char >> &board, int n, int row, int col){
    
    int i = row;
    int j = col;

    // checking row wise
    while(j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }

    i = row;
    j = col;

    // checking upper diagonal
    while( i>= 0 && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;j--;
    }


    i=row;
    j=col;
    // checking lower diagonal
    while(i < n && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }

    return true;

}

void solve(vector<vector<char >> &board, int n, int col ){

    // base case
    if(col >= n){
        printBoard(board, n);
        return;
    }


    // one condition
    for(int row=0; row<n; row++){
       if(isPossible(board, n, row, col)){

            // set queen
            board[row][col] = 'Q';

            // recursion
            solve(board, n, col+1);

            // backtracking 
            board[row][col] = '-';
            
       }
    }

}

int main(){

    int n;
    cin >> n ;

    vector<vector<char >> board(n, vector<char>(n, '-'));
    int col = 0;

    solve(board, n, col);


    return 0;
}