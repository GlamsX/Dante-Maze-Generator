/**
 * @Author: la-montagne
 * @Date:   2019-07-17T12:42:34+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T12:50:49+02:00
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
