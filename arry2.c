# Define a 2D array (matrix)
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

# Display the 2D array
print("Original Matrix:")
for row in matrix:
    print(row)

# Accessing elements of the 2D array
print("\nAccessing elements:")
print("Element at (0, 0):", matrix[0][0])
print("Element at (1, 2):", matrix[1][2])

# Modifying elements of the 2D array
matrix[1][1] = 99
print("\nModified Matrix:")
for row in matrix:
    print(row)