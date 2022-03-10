#include "my_functions.h"   
#include <stdio.h>
#include <stdlib.h>

void list(int mat[][100], int n)
{
    int i, j;
    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < n ; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void init_num(int mat[] [100], int n, int num)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            mat[i][j] = num;
    }
}

void magic_square(int mat[][100], int n)
{
    int j, i, num;

	// 1st rule, position for 1
	i = n / 2;
	j = n - 1;

	for (num = 1; num <= n * n;(j++, i--)) // 2nd rule
    {
		if (i == -1 && j == n) // 6th rule
		{
			j = n - 2;
			i = 0;
		}
		else {
			if (j == n) // 4th rule
				j = 0;

			if (i < 0) // 3rd rule
				i = n - 1;
		}
		if (mat[i][j]) // 5th rule
		{
			j -= 2;
			i++;
			continue;
		}
		else
			mat[i][j] = num++; // 2nd rule
	}
}


