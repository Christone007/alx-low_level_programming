#!/usr/bin/python3
"""Defines a function to calculate the perimeter of an island"""


def count_free_edges(line):
    """Counts the side free edges of a given strip of land area"""
    edge = 0
    line_len = len(line)

    for i in range(line_len):
        if i == 0:
            """First cell"""
            if line[i] == 1:
                edge += 1
                if line[i + 1] == 0:
                    edge += 1
        elif i == line_len - 1:
            """Last cell"""
            if line[i] == 1:
                if line[i - 1] == 0:
                    edge += 2
                else:
                    edge += 1
        else:
            """Every other cell"""
            if line[i] == 1:
                if line[i - 1] == 0:
                    edge += 1
                if line[i + 1] == 0:
                    edge += 1
    return edge


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

    perimeter = 0
    vertical_edges = 0
    horizontal_edges = 0

    """Count free Horizontal edges"""
    for horizontal_strip in grid:
        horizontal_edges += count_free_edges(horizontal_strip)

    """Count free Vertical edges"""
    for i in range(len(grid[0])):
        vertical_strip = []
        for line in grid:
            vertical_strip.append(line[i])
        vertical_edges += count_free_edges(vertical_strip)

    perimeter = horizontal_edges + vertical_edges
    return perimeter
