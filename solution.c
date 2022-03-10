#include <stdio.h>
#include <stdlib.h>

/*
Magic Squares Algorithm
-Addition of every Row. Column and both diagonals is same constant
-Constant = n(n(n) + 1) / 2

Rules:
1. 1 is at position (n/2, n-1)
2. (i, j) -> (i-1, j+1)
3. if i < 0 -> i=n-1
4. if j=n -> j=0, making sure that the number is not outside of the square
5. If position is occupied, then i=i+1, j=j-2
6. If (-1,n) -> (0,n-2)
*/

void list(int mat[] [100], int n);
void init_num(int mat[] [100], int n, int num);
void magic_square(int mat[][100], int n);

int main()
{
    int n; // the size of the square
    printf("Enter a number for a magic square: ");
    scanf("%d", &n);

    int mat[100][100];

    init_num(mat, n, 0);

    magic_square(mat, n);
    list(mat, n);

    return 0;
}

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
