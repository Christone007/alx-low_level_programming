#!/usr/bin/python3
"""Defines a function to calculate the perimeter of an island"""

def island_perimeter(grid):
    """Calculates an island's perimeter"""
    if type(grid) is not list:
        print("Grid must be a list")
        return (-1)

    if len(grid) == 0:
        print("The area cannot be empty")
        return (-1)

    if type(grid[0]) is not list:
        print("Grid must be a list of lists")
        return (-1)

    if len(grid[0]) > 100:
        print("The area should not be longer or wider than 100 units")
        return (-1)

    land_len = 0
    prev_land_len = 0
    land_edge = 2
    perimeter = 0

    for land_strip in grid:
        """Count land_len"""
        land_len = land_strip.count(1)

        if land_len == 0:
            land_edge = 0
        else:
            land_edge = 2

        """update perimeter"""
        diff = land_len - prev_land_len

        if diff < 0:
            diff *= -1

        perimeter += diff + land_edge

        """update prev"""
        prev_land_len = land_len

    return (perimeter)
