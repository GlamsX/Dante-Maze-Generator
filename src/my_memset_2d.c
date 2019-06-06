/*
** EPITECH PROJECT, 2019
** generator
** File description:
** my_memset_2d
*/

#include "../include/my.h"

char **my_memset_2d(char **maze, int size_x, int size_y)
{
    for (int i = 0, j = 0; i < size_y; i++) {
        for (j = 0; j < size_x; j++) {
            (j % 2 == 0 && i % 2 == 0) ? maze[i][j] = '*' : 0;
            (j % 2 != 0 && i % 2 == 0) ? maze[i][j] = 'X' : 0;
            (i % 2 != 0) ? maze[i][j] = 'X' : 0;
        }
        maze[i][j] = '\0';
    }
    return (maze);
}
