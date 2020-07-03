#!/usr/bin/python3
"""
create function for island perimeter
"""


def island_perimeter(grid):
    cx, cy = 0, 0
    len_grid = len(grid)
    for x in range(len_grid):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                cx += 1
                if (y != len(grid[x]) - 1 and grid[x][y + 1] == 1):
                    cy += 1
                if (x != len(grid) - 1 and grid[x + 1][y] == 1):
                    cy += 1
    return 4 * cx - 2 * cy
