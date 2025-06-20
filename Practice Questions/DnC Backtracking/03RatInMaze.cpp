#include<iostream>
#include<vector>
using namespace std;

// A function will handle all the below mentioned possibilities
//  //-1-> path closed
    //-2-> Out of Bound
    // Check is position already visited

bool isSafe(int srcx, int srcy, int newx, int newy, int maze[][4], int row, int col, vector<vector <bool>> &visited){
    if( (newx >= 0 && newx < row) &&
        (newy >=0 && newy < col) &&
        (maze[newx][newy] == 1) && 
        (visited[newx][newy] == false)
    ){  
        return true;
    }
    else { 
        return false;
    }
}

void printAllMazePath(int maze[][4], int row, int col, int srcx, int srcy, string &output, vector<vector <bool>> &visited){
    //base case- 
    //when reached destination
    // destination coordinates are [row - 1], [col - 1];
    if(srcx == row -1 && srcy == col -1){
        cout<< output <<endl;
        return;
    }

    // ek case solve kr do, baaki recursion dekh lega
    
    //UP -> SOME CONDITION ARE THERE
    int newx = srcx - 1;
    int newy = srcy;
    if(isSafe(srcx, srcy, newx, newy, maze, row, col, visited )){
        // mark visited
        visited[newx][newy] = true;
        // call recursion
        output.push_back('U');
        printAllMazePath(maze, row, col, newx, newy, output, visited);
        output.pop_back();
        // coming back mark not visited- BACKTRACKING
        visited[newx][newy] = false;

    }
   

    //RIGHT
    newx = srcx;
    newy = srcy + 1;
    if(isSafe(srcx, srcy, newx, newy, maze, row, col, visited )){
        // mark visited
        visited[newx][newy] = true;
        // call recursion
        output.push_back('R');
        printAllMazePath(maze, row, col, newx, newy, output, visited);
        output.pop_back();        // coming back mark not visited- BACKTRACKING
        visited[newx][newy] = false;

    }

    //DOWN
    newx = srcx + 1;
    newy = srcy;
    if(isSafe(srcx, srcy, newx, newy, maze, row, col, visited )){
        // mark visited
        visited[newx][newy] = true;
        // call recursion
        output.push_back('D');
        printAllMazePath(maze, row, col, newx, newy, output, visited);
        output.pop_back();        
        // coming back mark not visited- BACKTRACKING
        visited[newx][newy] = false;

    }

    //LEFT
    newx = srcx;
    newy = srcy - 1;
    if(isSafe(srcx, srcy, newx, newy, maze, row, col, visited )){
        // mark visited
        visited[newx][newy] = true;
        // call recursion
        output.push_back('L');
        printAllMazePath(maze, row, col, newx, newy, output, visited);
        output.pop_back();
        // coming back mark not visited- BACKTRACKING
        visited[newx][newy] = false;

    }
}

int main(){
    int maze[4][4] = {
        {1,0,0,0},
        {1,1,0,0},
        {1,1,0,0},
        {1,1,1,1}
    };

    int row = 4;
    int col = 4;

    int srcx = 0;
    int srcy = 0;

    string output = "";

    // Array for visited enter: 2D array
    vector <vector <bool> > visited( row, vector<bool> (col, false));

    if(maze[0][0] == 0){
        // Src position is closed, that means RAT cannot move
        cout <<"No PATH EXISTs"<<endl;
    }
    else{
        visited[srcx][srcy] = true;
        printAllMazePath(maze, row, col, srcx, srcy, output, visited);
    }



}