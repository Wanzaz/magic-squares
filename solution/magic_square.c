#include <stdio.h>
#include <stdlib.h>

/*
1. number 1 at position (n/2, n-1).
2. After the number 1 alocated to position (n/2, n-1) -> (m, n). The next number will be located to position (m-1, n+1). But if the row = -1 then locate it to size - 1, and if the column position end up at size position then locate it to position 0.
3. If the position has already been filled, then decrement the column position -2 and row increment position +1
4. if(row == -1 and column == n), switch the location to (0, n - 2)
*/

void list(int mat[][100], int size);
void magic_square(int mat[][100], int size);

int main()
{
    int mat[100][100];
    int size;
    printf("Enter size of magic square: ");
    scanf("%d", &size);
    printf("The size of Magic Square is %d\n", size);
    printf("The sum of each row or column and both diagonals is %d\n", size * (size * size + 1) / 2);


    magic_square(mat, size);
    list(mat, size);

    return 0;
}

void list(int mat[][100], int size)
{
    int i, j;
    for(i = 0; i < size ; i++)
    {
        for(j = 0; j < size ; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void magic_square(int mat[][100], int size)
{
    // slots to zero
    int i, j;
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
            mat[i][j] = 0;
    }
    
    // first position
    int row = size/2;
    int column = size - 1;

    // the power of size
    int number = size * size;
    // the first number -> 1 
    int count = 1;

    while(count <= number) {
        if(row == -1 && column == size){ // 4th condition
            column = size - 2;
            row = 0; 
        }
        else{
            if(column == size) // if column comes at size, replace it with 0
                column = 0;
            if(row < 0)  // if row comes at 0, replace it with size-1
                row = size - 1;
        }
                
        if(mat[row][column] != 0) { // 3rd condition
            column = column - 2;
            row = row + 1;
            continue;
        }
        else {
            mat[row][column] = count;  //insering the values
            count += 1;
        }
        row = row - 1;  // 2nd condition 
        column = column + 1;
    }
}
