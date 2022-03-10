# Magic Squares

## Task Description
The user enters an odd n and the program prints a filled matrix n x n filled with numbers 1, 2, 3, ..., n ^ 2 so that no number is repeated and the sum in row and column is always the same. The total of row, column, and both diagonals are equal.

 ### Constant
 - counts the total

    ```n(n^2 + 1) / 2```
 

## Rules
1. 1 is sotred at position (n/2, n-1)
2. (i, j) -> (i-1, j+1)
3. if i=-1 -> i=n-1
4. if j=n -> j=0
5. If position is occupied, then i=i+1, j=j-2
6. If (-1,n) -> (0,n-2)

#### Additional Notes
- circle: 0, 1, 2
- i -> anti
- j -> clockwise

#### Task Decription in CZ
Uživatel zadá liché n a program vypíše vyplněnou matici n x n naplněnou čísly 1, 2, 3, ... ,
n^2 tak, že se žádné číslo neopakuje a součet v řádku i ve sloupci je vždy stejný. Řada, sloupec a obě diagonály mají stejný součet.
