/*
** EPITECH PROJECT, 2023
** game
** File description:
** sokoban
*/
#include "my.h"

void free_map(char **mapc)
{
    for (int i = 0; mapc[i] != 0; i++)
            free(mapc[i]);
    free(mapc);
}

int open_map(char **av)
{
    struct stat infofile;
    variable openfile;
    char **mapc;

    openfile.fd = open(av[1], O_RDONLY);
    if (openfile.fd == -1)
        return 84;
    openfile.rtrn_stat = stat(av[1], &infofile);
    openfile.sizefile = infofile.st_size;
    openfile.buffer = malloc((openfile.sizefile + 1) * (sizeof(char)));
    openfile.buffer[openfile.sizefile] = '\0';
    openfile.size = read(openfile.fd, openfile.buffer, openfile.sizefile);
    mapc = my_str_to_word_array(openfile);
    if (nb_o_x(openfile) == 1 || map_limit(mapc, openfile) == 84)
        return 84;
    if (display_map(mapc, openfile) == 1)
        return 1;
    openfile.error = map_limit(mapc, openfile);
    free_map(mapc);
    return error(openfile);
}
