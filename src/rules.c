/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** rules
*/
#include "my.h"

void rulesgame(char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0'){
        my_putstr("USAGE\n\t./my_sokoban map\n");
        my_putstr("DESCRIPTION\n\tmap file representing ");
        my_putstr("the warehouse map, containing '#' for walls,\n");
        my_putstr("\t'P' for the player, 'X' for boxes and 'O'");
        my_putstr(" for storage locations.\n");
    }
}
