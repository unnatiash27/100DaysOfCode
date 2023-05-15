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


// You own a Goal Parser that can interpret a string command.
// The command consists of an alphabet of "G", "()" and/or "(al)" in some order.
// The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al".
// The interpreted strings are then concatenated in the original order.
// Given the string command, return the Goal Parser's interpretation of command.

class Solution
{
public:
    string interpret(string command)
    {
        string s = "";
        for (int i = 0; i < command.size();)
        {
            if (command[i] == 'G')
            {
                s += 'G';
                i++;
            }
            else if (command[i] == '(' && command[i + 1] == ')')
            {
                s += 'o';
                i += 2;
            }
            else
            {
                s += "al";
                i += 4;
            }
        }
        return s;
    }
};

// Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

class Solution
{
public:
    string toLowerCase(string s)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
};
