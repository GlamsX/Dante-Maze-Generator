/**
 * @Author: la-montagne
 * @Date:   2019-07-17T12:42:34+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:01:47+02:00
 */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct dante_s
{
    char **maze;
    int x;
    int y;
    int size_x;
    int size_y;
} dante_t;

char **my_strdup_2d(int size_x, int size_y);
char **my_memset_2d(char **maze, int size_x, int size_y);
void generate_maze(dante_t *dante, char **maze);
void finish_maze(char **maze, int size_x, int size_y, int type);
void print_maze(char **maze, int size_y);
