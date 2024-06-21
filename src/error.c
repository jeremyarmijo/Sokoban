/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** error output
*/
#include "my.h"

int my_strlen(const char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        i++;
    }
    return i;
}

variable init_nb_p_o_x(variable openfile, int i, cpt_t *cpt_nb)
{
        if (openfile.buffer[i] == 'P')
            cpt_nb->cpt_p++;
        if (openfile.buffer[i] == 'O')
            cpt_nb->cpt_O++;
        if (openfile.buffer[i] == 'X')
            cpt_nb->cpt_X++;
    return openfile;
}

int cpt_error(cpt_t *cpt_nb)
{
    if (cpt_nb->cpt_p == 0 || cpt_nb->cpt_p > 1)
        return 84;
    if (cpt_nb->cpt_O == 0 || cpt_nb->cpt_X != cpt_nb->cpt_O)
        return 84;
    if (cpt_nb->cpt_X == 0)
        return 84;
    return 0;
}

int file_not_map(variable openfile)
{
    int i = 0;
    cpt_t *cpt_nb = malloc(sizeof(cpt_t *) * 1);

    cpt_nb->cpt_p = 0;
    cpt_nb->cpt_O = 0;
    cpt_nb->cpt_X = 0;
    while (openfile.buffer[i] != '\0'){
        if (MAP_C1 || MAP_C2 || MAP_C3 || MAP_C4 || MAP_C5 || MAP_C6) {
            i++;
        } else {
            return 84;
        }
        init_nb_p_o_x(openfile, i, cpt_nb);
    }
    if (cpt_error(cpt_nb) == 84){
        free(cpt_nb);
        return 84;
    }
    return 0;
}

int error(variable openfile)
{
    openfile.file_not_m = 0;
    openfile.file_not_m = file_not_map(openfile);
    if (openfile.rtrn_stat == -1)
        return 84;
    if (openfile.file_not_m == 84)
        return 84;
    return 0;
}
