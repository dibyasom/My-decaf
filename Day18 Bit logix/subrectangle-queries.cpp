#include <bits/stdc++.h>

using namespace std;

class SubrectangleQueries
{
public:
    vector<vector<int>> rectangle_;
    SubrectangleQueries(vector<vector<int>> &rectangle)
    {
        rectangle_ = rectangle;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        for (int i = row1; i <= row2; i++)
            for (int j = col1; i <= col2; i++)
                this->rectangle_[i][j] = newValue;
    }

    int getValue(int row, int col)
    {
        return this->rectangle_[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */