/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include "my.h"

int my_strlen_nb_char(variable openfile)
{
    int i = 1;

    while (openfile.buffer[i] != '\n'){
        i++;
    }
    return i;
}
