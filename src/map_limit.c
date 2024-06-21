/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** error output
*/
#include "my.h"

int map_limit(char **mapc, variable openfile)
{
    int cpt = 0;
    int nb_char = my_strlen_nb_char(openfile);
    int nbline = my_strlen_nb_line(openfile);

    for (int i = 0; mapc[i] != 0; i++) {
        if (mapc[i][0] == '#' && mapc[i][nb_char - 1] == '#'){
            cpt++;
        } else {
            return 84;
        }
    }
    for (int wall = 0; mapc[0][wall] != '\0'; wall++) {
        if (mapc[0][wall] != '#')
            return 84;
    }
    for (int wall = 0; mapc[nbline - 1][wall] != '\0'; wall++) {
        if (mapc[nbline -1][wall] != '#')
            return 84;
    }
    return 0;
}
