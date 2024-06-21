/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** error output
*/
#include "my.h"

pos_t if_bis(char **map, int i, pos_t pos_p, int wich_char)
{
    int char_nb = 0;

        for (; map[i][char_nb] != '\0'; char_nb++){
            if (map[i][char_nb] == wich_char){
                pos_p.y = i;
                pos_p.x = char_nb;
                return pos_p;
            }
        }
        char_nb = 0;
    return pos_p;
}

pos_t position(pos_t pos_p, char **map, char wich_char)
{
    int i = 0;

    pos_p.x = 0;
    pos_p.y = 0;
    for (; map[i] != 0; i++){
        pos_p = if_bis(map, i, pos_p, wich_char);
        if (pos_p.x != 0 && pos_p.y != 0)
            return pos_p;
    }
    return pos_p;
}

void m_position_bis(int char_nb, char **map, char wich_char, int **pos)
{
    int i = 0;
    int index = 0;

    if (map[i][char_nb] == wich_char){
        map[i][char_nb] = ' ';
        pos[index][0] = char_nb;
        pos[index][1] = i;
        index += 1;
    }
}

void m_position(int nb_O, char **map)
{
    int i = 0;
    int char_nb = 0;
    int **pos = malloc(sizeof(int *)* nb_O + 1);

    for (int h = 0; nb_O > h; h++){
        pos[h] = malloc((2 + 1) * sizeof(int));
        pos[h][2 + 1] = '\0';
    }
    for (; map[i] != 0; i++){
        for (int index = 0; map[i][char_nb] != '\0'; char_nb++){
            index++;
        }
        char_nb = 0;
    }
}
