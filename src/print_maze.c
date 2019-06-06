/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** print_maze
*/

#include "../include/my.h"

void free_tabs(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}

void print_maze(char **maze, int size_y)
{
    for (int i = 0; maze[i] != NULL; i++) {
        write(1, maze[i], strlen(maze[i]));
        if (i != size_y - 1)
            write(1, "\n", 1);
    }
    free_tabs(maze);
}
