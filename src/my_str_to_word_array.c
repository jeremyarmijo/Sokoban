/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include "my.h"

char **my_str_to_word_array(variable openfile)
{
    char **mapcouper;
    int i = 0;
    char **map_rempli;
    int nb_char = my_strlen_nb_char(openfile);
    int nbline = my_strlen_nb_line(openfile);

    mapcouper = malloc((nbline + 1) * (sizeof(char *)));
    mapcouper[nbline] = '\0';
    for (i = 0; nbline > i; i++){
        mapcouper[i] = malloc((nb_char + 1) * sizeof(char));
        mapcouper[i][nb_char] = '\0';
    }
    map_rempli = rempli_map(nbline, openfile, mapcouper);
    return map_rempli;
}

char **rempli_map(int nbline, variable openfile, char **mapc)
{
    int cpt = 0;
    int c2 = 0;
    int cpt2 = 0;

    for (cpt = 0; nbline > cpt; cpt++){
        for (; openfile.buffer[cpt2] != '\n'; cpt2++){
            mapc[cpt][c2] = openfile.buffer[cpt2];
            c2++;
        }
        cpt2++;
        c2 = 0;
    }
    return mapc;
}
