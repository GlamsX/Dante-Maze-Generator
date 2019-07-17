/**
 * @Author: la-montagne
 * @Date:   2019-07-17T12:42:34+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T12:50:27+02:00
 */

#include "../include/my.h"
#include <stdio.h>

void if_valid_direction(char **maze, int i, int j, int random)
{
    random = rand() % 2;
    if (j - 1 >= 0 && random == 0)
        maze[i][j - 1] = '*';
    else if (i - 1 >= 0 && random == 1)
        maze[i - 1][j] = '*';
}

void generate_maze(dante_t *dante, char **maze)
{
    int random = 0;

    for (int i = 0; i < dante->size_y; i += 2) {
        dante->x = 0;
        dante->y = 0;
        for (int j = 0; j < dante->size_x; j += 2) {
            (i == 0) ? maze[i][j] = '*' : 0;
            (i - 1 >= 0 && maze[i - 1][j] == 'X') ? dante->x = 1 : 0;
            (j - 1 >= 0 && maze[i][j - 1] == 'X') ? dante->y = 1 : 0;
            (i - 1 >= 0 && dante->x == 1 && dante->y == 0) ?
            maze[i - 1][j] = '*' : 0;
            (j - 1 >= 0 && dante->x == 0 && dante->y == 1) ?
            maze[i][j - 1] = '*' : 0;
            (dante->x == 1 && dante->y == 1) ?
            if_valid_direction(maze, i, j, random) : 0;
        }
    }
}
