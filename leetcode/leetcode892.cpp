//
// Created by 邵军 on 2019/5/20.
//
#include <iostream>
#include <vector>

using namespace std;

int calculate(vector<vector<int>> &, int &, int , int);

size_t n;

int calculate(vector<vector<int>> &grid, int &pInt, int i, int j) {
    if(i < 0 || j< 0 || i >= n || j >= n)
        return pInt;
    return max(pInt - grid[i][j], 0);
}

int surfaceArea(vector<vector<int>>& grid)
{
    int count = 0;
    n = grid.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(grid[i][j]>0)
                count += 2 + calculate(grid, grid[i][j], i-1, j)
                       + calculate(grid, grid[i][j], i  , j-1)
                       + calculate(grid, grid[i][j], i+1, j)
                       + calculate(grid, grid[i][j], i  , j+1);
        }
    }
    return count;
}

int main(){
//    vector<vector<int>> grid = {{1,0},{0,2}};
//    cout << "count=" << surfaceArea(grid) << endl;

    int a = 0;
    int b = (a++) + (++a) + (a++);
    cout << "a=" << a << ",b=" << b << endl;
}
