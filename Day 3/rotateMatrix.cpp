// Link : https://www.codingninjas.com/codestudio/problems/rotate-matrix_8230774?challengeSlug=striver-sde-challenge&leftPanelTab=0

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    if (n == 1 || m == 1)
        return;
    int top = 0, bot = n - 1, left = 0, right = m - 1;
    while (top < bot && left < right)
    {
        int temp = mat[left][top];

        for (int i = top; i < bot; i++)
            mat[i][left] = mat[i + 1][left];

        for (int i = left; i < right; i++)
            mat[bot][i] = mat[bot][i + 1];

        for (int i = bot; i > top; i--)
            mat[i][right] = mat[i - 1][right];

        for (int i = right; i > left + 1; i--)
            mat[top][i] = mat[top][i - 1];

        mat[top][left + 1] = temp;
        top++, bot--, left++, right--;
    }
}