/**
 * @Author: la-montagne
 * @Date:   2019-07-17T12:42:34+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:07:29+02:00
 */

#include "../include/my.h"
#include <time.h>

int usage_help(void)
{
    printf("Usage:\n\t./generator [x] [y] [type]\n");
    printf("description:\n\t[x] = size_x\n\t[y] = size_y\n\t");
    printf("type:\n\t\t");
    printf("-imperfect: generate imperfect maze if ac == 3 (type = NULL) or");
    printf(" write imperfect\n\t\texepmle:\n");
    printf("./generator 10 15 or ./generator [10] [15] [imperfect]\n\n");
    printf("\t\t-perfect: type = perfect\n\t\texemple:\n");
    printf("./generator [10] [15] [perfect]\n\n");
    printf("imperfect don't work yet.\n");
    return (0);
}

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
    if (ac >= 3 && ac < 5) {
        init_dante(&dante, atoi(av[1]), atoi(av[2]));
        if (ac == 4 && strcmp(av[3], "perfect") == 0)
            create_perfect_maze(atoi(av[1]), atoi(av[2]), &dante);
        else
            create_imperfect_maze(atoi(av[1]), atoi(av[2]), &dante);
    } else
        return(usage_help());
    return (0);
}
