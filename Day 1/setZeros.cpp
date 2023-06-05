// Link : https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge&leftPanelTab=1

void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();

	// declare vector

	vector<int> x, y;

	// Traverse the matrix

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] == 0)
			{
				x.push_back(i);
				y.push_back(j);
			}
		}
	}

	// Now make the row => 0

	for (int i = 0; i < x.size(); i++)
	{
		int index = x[i];
		for (int j = 0; j < m; j++)
		{
			matrix[index][j] = 0;
		}
	}

	// Now make the column => 0

	for (int i = 0; i < y.size(); i++)
	{
		int index = y[i];

		for (int j = 0; j < n; j++)
		{
			matrix[j][index] = 0;
		}
	}
}