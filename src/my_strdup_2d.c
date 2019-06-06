/*
** EPITECH PROJECT, 2019
** generator
** File description:
** my_strdup_2d
*/

#include "../include/my.h"

char **my_strdup_2d(int size_x, int size_y)
{
    int i = 0;
    char **maze = malloc(sizeof(char *) * (size_y + 1));

    if (!maze)
        return (NULL);
    for (; i < size_y; i++) {
        maze[i] = malloc(sizeof(char) * (size_x + 1));
        if (!maze[i])
            return (NULL);
    }
    maze[i] = NULL;
    return (maze);
}
