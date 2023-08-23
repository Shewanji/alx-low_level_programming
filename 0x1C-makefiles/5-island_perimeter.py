#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (list of list of int): Represents the island grid.

    Returns:
    int: The perimeter of the island.
    """

    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4  # Start with 4 sides
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract 2 for common adjacent sides
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
