/*
** EPITECH PROJECT, 2019
** generator
** File description:
** dig_maze
*/

#include "../include/my.h"

void dig_maze(char **maze, int size_x, int size_y)
{
    int rnd_x = rand() % size_x - 1;
    int rnd_y = rand() % size_y;

    for (int i = 0; i != (size_y + size_y); i++)
        if (maze[rnd_y][rnd_x] == 'X')
            maze[rnd_y][rnd_x] = '*';
}
