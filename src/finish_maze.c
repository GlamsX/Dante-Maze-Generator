/*
** EPITECH PROJECT, 2019
** generator
** File description:
** finish_maze
*/

#include "../include/my.h"

void finish_maze(char **maze, int size_x, int size_y, int type)
{
    int i = 0;
    int j = 0;

    for (; i < size_y - 1; i++);
    for (; j < size_x - 1; j++);
    (maze[i][j - 1] == 'X' && maze[i - 1][j] == 'X') ?
    maze[i][j - 1] = '*' : 0;
    maze[i][j] = '*';
    if (type == 1)
        dig_maze(maze, size_x, size_y);
    print_maze(maze, size_y);
}
