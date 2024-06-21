/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** error output
*/
#include "my.h"

variable cmp_map_nb_o(variable openfile, int i, char **map, int cpt)
{
    char **maptmp = my_str_to_word_array(openfile);

    if (maptmp[i][cpt] == 'O'){
        if (map[i][cpt] == 'O' || map[i][cpt] == 'P') {
            openfile.nb_o++;
        }
    }
    for (int i = 0; maptmp[i] != 0; i++)
        free(maptmp[i]);
    free(maptmp);
    return openfile;
}

int check_nb_o_map(char **map, variable openfile)
{
    openfile.nb_o = 0;
    for (int i = 0; map[i] != 0; i++) {
        for (int cpt = 0; map[i][cpt] != '\0'; cpt++) {
            openfile = cmp_map_nb_o(openfile, i, map, cpt);
        }
    }
    if (openfile.nb_o == 0)
        return 84;
    return 0;
}
