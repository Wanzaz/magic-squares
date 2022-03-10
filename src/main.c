#include <stdio.h>
#include <stdlib.h>
#include "my_functions.h"


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
