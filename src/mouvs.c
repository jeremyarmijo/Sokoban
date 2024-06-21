/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** error output
*/
#include "my.h"

char **mouvs(int action, char **map, variable openfile)
{
    if (action == KEY_RIGHT){
        map = mouv_p_right(map, openfile);
    }
    if (action == KEY_UP){
        map = mouv_p_up(map, openfile);
    }
    if (action == KEY_DOWN){
        map = mouv_p_down(map, openfile);
    }
    if (action == KEY_LEFT){
        map = mouv_p_left(map, openfile);
    }
    return map;
}

int nb_o_x(variable openfile)
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
        openfile = init_nb_p_o_x(openfile, i, cpt_nb);
    }
    if (cpt_nb->cpt_O > cpt_nb->cpt_X)
        return 1;
    return 0;
}
