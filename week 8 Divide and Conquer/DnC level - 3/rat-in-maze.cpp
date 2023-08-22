

#include<iostream>
#include<vector>

using namespace std;


bool isSafe(int i, int j, int row, int col, int arr[][3], vector<vector<bool>> &visited){

    if(i == row || i < 0 || j == col || j < 0){
        return 0;
    }
    else if(visited[i][j] == true){
        return false;
    }
    else if(arr[i][j] == 0){
        return false;
    }
    
    return true;

}


void solveMaze(int arr[][3], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output){


    // base case
    if(i == row-1 && j == col-1){
        // answer Found
        path.push_back(output);
        return;
    }

    // Down --> i+1, j
    if(isSafe(i+1, j, row, col, arr, visited)){
        visited[i+1][j] = true;
        solveMaze(arr, row, col, i+1, j, visited, path, output + 'D');

        // Backtracking
        visited[i+1][j] = false;
    }


    // Left --> i, j-1
    if(isSafe(i, j-1, row, col, arr, visited)){
        visited[i][j-1] = true;
        solveMaze(arr, row, col, i, j-1, visited, path, output + 'L');

        // Backtracking
        visited[i][j-1] = false;
    }


    // Right --> i, j+1
    if(isSafe(i, j+1, row, col, arr, visited)){
        visited[i][j+1] = true;
        solveMaze(arr, row, col, i, j+1, visited, path, output + 'R');

        // Backtracking
        visited[i][j+1] = false;
    }


    // Up --> i-1, j
    if(isSafe(i-1, j, row, col, arr, visited)){
        visited[i-1][j] = true;
        solveMaze(arr, row, col, i-1, j, visited, path, output + 'U');

        // Backtracking
        visited[i-1][j] = false;
    }


}



int main(){

    int maze[3][3] = {
        {1, 0, 0},
        {1, 1, 0},
        {1, 1, 0}
    };

    // Edge Case : 1 ----> if first element is 0
    if(maze[0][0] == 0){
        cout << "No Path Exists" << endl;
        return 0;
    }

    int row = 3;
    int col = 3;
    string output = "";
    vector<string> path;

    vector<vector<bool>> visited(row, vector<bool> (col, false));


    visited[0][0] = true;

    solveMaze(maze, row, col, 0, 0, visited, path, output);

    // output
    cout << "The possible paths to reach the destination are : " << endl;
    for(auto it : path){
        cout << it << endl;
    }

    if(path.size() == 0){
        cout << "No paths available" << endl;
    }



    return 0;
}