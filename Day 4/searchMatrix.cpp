// Link : https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_8230773?challengeSlug=striver-sde-challenge&leftPanelTab=0
bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int row = mat.size();
    int col = mat[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == target)
            {
                return true;
            }
            else if (mat[i][j] > target)
            {
                break;
            }
        }
    }

    return false;
}

/*
    Analysis:
    Time Complexity : O(M*N)
    Space Complexity : O(1)
*/