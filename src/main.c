/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** CPE_matchstick_2017
*/

#include "../include/my.h"
#include <time.h>

void init_dante(dante_t *dante, int size_x, int size_y)
{
    dante->x = 0;
    dante->y = 0;
    dante->size_x = size_x;
    dante->size_y = size_y;
}

void create_perfect_maze(int x, int y, dante_t *dante)
{
    char **maze = my_strdup_2d(x, y);

    if (!maze)
        return;
    maze = my_memset_2d(maze, x, y);
    generate_maze(dante, maze);
    finish_maze(maze, x, y, 0);
}

void create_imperfect_maze(int x, int y, dante_t *dante)
{
    char **maze = my_strdup_2d(x, y);

    if (!maze)
        return;
    maze = my_memset_2d(maze, x, y);
    generate_maze(dante, maze);
    finish_maze(maze, x, y, 1);
}

int main(int ac, char **av)
{
    dante_t dante;

    srand(time(NULL));
    if (ac >= 3) {
        init_dante(&dante, atoi(av[1]), atoi(av[2]));
        if (ac == 4 && strcmp(av[3], "perfect") == 0)
            create_perfect_maze(atoi(av[1]), atoi(av[2]), &dante);
        else
            create_imperfect_maze(atoi(av[1]), atoi(av[2]), &dante);
    }
}
