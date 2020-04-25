#include<stdio.h>
int minimumTotal(int** triangle, int triangleSize, int* triangleColSize){
	if (NULL == triangle || 0 == triangleSize || NULL == triangleColSize)
	{
		return 0;
	}

	int row = triangleSize - 2;
	int col = 0;

	for (; 0 <= row; row--)
	{
		for (col = 0; col <= triangleColSize[row] - 1; col++)
		{
			triangle[row][col] += triangle[row + 1][col] < triangle[row + 1][col + 1] ? \
				triangle[row + 1][col] : triangle[row + 1][col + 1];
		}
	}

	return triangle[0][0];
}