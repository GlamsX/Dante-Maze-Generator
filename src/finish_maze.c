/**
 * @Author: la-montagne
 * @Date:   2019-07-17T12:42:34+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:05:03+02:00
 */

#include "../include/my.h"

void finish_maze(char **maze, int size_x, int size_y, int type)
{
    int i = 0;
    int j = 0;

    (void)type;
    for (; i < size_y - 1; i++);
    for (; j < size_x - 1; j++);
    (maze[i][j - 1] == 'X' && maze[i - 1][j] == 'X') ?
    maze[i][j - 1] = '*' : 0;
    maze[i][j] = '*';
    print_maze(maze, size_y);
}
