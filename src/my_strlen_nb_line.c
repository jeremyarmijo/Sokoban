/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include "my.h"

int my_strlen_nb_line(variable openfile)
{
    int i = 1;
    int nb_line = 0;

    while (openfile.buffer[i] != '\0'){
        if (openfile.buffer[i] == '\n'){
            nb_line++;
        }
        i++;
    }
    return nb_line;
}
