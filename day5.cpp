// Given a square matrix mat, return the sum of the matrix diagonals.
// Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int s = 0;
        int n = mat.size();
        for (int i = 0; i < n; i++)
        {
            s += mat[i][i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1 - i)
                s += mat[i][n - 1 - i];
        }
        return s;
    }
};
