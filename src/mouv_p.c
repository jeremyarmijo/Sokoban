/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** error output
*/
#include "my.h"

char **reset_o(char **map, char **map_tmp, pos_t pos_p)
{
    if (map_tmp[pos_p.y][pos_p.x] == 'O'){
        if (map[pos_p.y][pos_p.x] != 'P' || map[pos_p.y][pos_p.x] != 'X')
            map[pos_p.y][pos_p.x] = 'O';
    } else {
        map[pos_p.y][pos_p.x] = ' ';
    }
    return map;
}

char **mouv_p_right(char **map, variable openfile)
{
    pos_t pos_p = position(pos_p, map, 'P');
    char **map_tmp = my_str_to_word_array(openfile);

    if (map[pos_p.y][pos_p.x + 1] == '#')
        return map;
    if (map[pos_p.y][pos_p.x + 1] == 'X'){
        if (map[pos_p.y][pos_p.x + 2] == 'X' || CMP_C1){
            return map;
        }
        map[pos_p.y][pos_p.x + 2] = 'X';
        map[pos_p.y][pos_p.x + 1] = 'P';
        map[pos_p.y][pos_p.x] = ' ';
        map = reset_o(map, map_tmp, pos_p);
        return map;
    }
    map = reset_o(map, map_tmp, pos_p);
    map[pos_p.y][pos_p.x + 1] = 'P';
    free_map(map_tmp);
    return map;
}

char **mouv_p_up(char **map, variable openfile)
{
    pos_t pos_p = position(pos_p, map, 'P');
    char **map_tmp = my_str_to_word_array(openfile);

    if (map[pos_p.y - 1][pos_p.x] == '#')
        return map;
    if (map[pos_p.y - 1][pos_p.x] == 'X'){
        if (map[pos_p.y - 2][pos_p.x] == 'X' || CMP_C2){
            return map;
        }
        map[pos_p.y - 2][pos_p.x] = 'X';
        map[pos_p.y - 1][pos_p.x] = 'P';
        map[pos_p.y][pos_p.x] = ' ';
        map = reset_o(map, map_tmp, pos_p);
        return map;
    }
    map = reset_o(map, map_tmp, pos_p);
    map[pos_p.y - 1][pos_p.x] = 'P';
    free_map(map_tmp);
    return map;
}

char **mouv_p_down(char **map, variable openfile)
{
    pos_t pos_p = position(pos_p, map, 'P');
    char **map_tmp = my_str_to_word_array(openfile);

    if (map[pos_p.y + 1][pos_p.x] == '#')
        return map;
    if (map[pos_p.y + 1][pos_p.x] == 'X'){
        if (map[pos_p.y + 2][pos_p.x] == 'X' || CMP_C3){
            return map;
        }
        map[pos_p.y + 2][pos_p.x] = 'X';
        map[pos_p.y + 1][pos_p.x] = 'P';
        map[pos_p.y][pos_p.x] = ' ';
        map = reset_o(map, map_tmp, pos_p);
        return map;
    }
    map = reset_o(map, map_tmp, pos_p);
    map[pos_p.y + 1][pos_p.x] = 'P';
    free_map(map_tmp);
    return map;
}

char **mouv_p_left(char **map, variable openfile)
{
    pos_t pos_p = position(pos_p, map, 'P');
    char **map_tmp = my_str_to_word_array(openfile);

    if (map[pos_p.y][pos_p.x - 1] == '#')
        return map;
    if (map[pos_p.y][pos_p.x - 1] == 'X'){
        if (map[pos_p.y][pos_p.x - 2] == 'X' || CMP_C4){
            return map;
        }
        map[pos_p.y][pos_p.x - 2] = 'X';
        map[pos_p.y][pos_p.x - 1] = 'P';
        map[pos_p.y][pos_p.x] = ' ';
        map = reset_o(map, map_tmp, pos_p);
        return map;
    }
    map = reset_o(map, map_tmp, pos_p);
    map[pos_p.y][pos_p.x - 1] = 'P';
    free_map(map_tmp);
    return map;
}
