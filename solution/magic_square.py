"""
1. number 1 at position (n/2, n-1).
2. After the number 1 alocated to position (n/2, n-1) -> (m, n). The next number will be located to position (m-1, n+1). But if the row = -1 then locate it to size - 1, and if the column position end up at size position then locate it to position 0.
3. If the position has already been filled, then decrement the column position -2 and row increment position +1
4. if(row == -1 and column == n), switch the location to (0, n - 2)
"""

def magic_square(size):
    magic_square=[] # creating the matrix

    # slots to zero
    for x in range(size):
        z=[]
        for y in range(size):
            z.append(0)
        magic_square.append(z)
    # more efficient: magic_square = [[0 for x in range(size)] for y in range(size)] 
            
    # first position
    row = size//2
    column = size - 1

    # the power of size
    number = size ** 2
    # the first number -> 1 
    count = 1 
    
    while(count <= number):
        if(row == -1 and column == size): # 4th condition
            column = size - 2
            row = 0
        else:
            if(column == size): #if column comes at size, replace it with 0
                column = 0
            if(row < 0):  # if row comes at 0, replace it with size-1
                row = size - 1
                
        if(magic_square[row][column] != 0): # 3rd condition
            column = column - 2
            row = row + 1
            continue
        
        else:
            magic_square[row][column] = count  #insering the values
            count += 1
            
        row = row - 1  # 2nd condition 
        column = column + 1
        
    #printing matrix
    for x in range(size):
        for y in range(size):
            print(magic_square[x][y], end = " ")
        print()

        
# user input of user's number
user_num = int(input("Enter a number to create a magic square: "))

print ("Magic Square for number =", user_num) 
print ("Sum of each row or column and both diagonals is",user_num * (user_num ** 2 + 1) / 2, "\n")
        
# calling functtion
magic_square(user_num)
