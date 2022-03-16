# Magic Squares

## Task Description
The user enters an odd n and the program prints a filled matrix n x n filled with numbers 1, 2, 3, ..., n ^ 2 so that no number is repeated and the sum in row and column is always the same. The total of row, column, and both diagonals are equal.

 ### Constant
 - counts the total

    ```n(n^2 + 1) / 2```
 

## Conditions 
1. number 1 at position (n/2, n-1).
2. After the number 1 alocated to position (n/2, n-1) -> (m, n). The next number will be located to position (m-1, n+1). But if the row = -1 then locate it to size - 1, and if the column position end up at size position then locate it to position 0.
3. If the position has already been filled, then decrement the column position -2 and row increment position +1
4. if(row == -1 and column == n), switch the location to (0, n - 2)

#### Additional Notes
- circle: 0, 1, 2
- i -> anti
- j -> clockwise

#### Task Description in CZ
Uživatel zadá liché n a program vypíše vyplněnou matici n x n naplněnou čísly 1, 2, 3, ... ,
n^2 tak, že se žádné číslo neopakuje a součet v řádku i ve sloupci je vždy stejný. Řada, sloupec a obě diagonály mají stejný součet.
