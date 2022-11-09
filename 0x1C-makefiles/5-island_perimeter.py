#!/usr/bin/python3
"""Defines an island perimeter measuring function"""


def island_perimeter(grid):
    """Return the perimiter of an island
    The grid represents water by 0 and land by 1
    Args:
        grid (list): A list of list of integers representing an island
    Returns:
        The perimeter of the island defined in grid
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    for i in range(1, rows - 1):
        for j in range(1, cols - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
