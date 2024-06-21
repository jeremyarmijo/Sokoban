/*
** EPITECH PROJECT, 2023
** game
** File description:
** sokoban
*/
#include "my.h"
#include "unistd.h"

int game(char **map, int action, variable openfile)
{
    int i = 0;

    if (check_nb_o_map(map, openfile) == 84){
        endwin();
        return -84;
    }
    while (map[i] != 0){
        printw(map[i]);
        printw("\n");
        i++;
    }
    refresh();
    action = getch();
    map = mouvs(action, map, openfile);
    clear();
    i = 0;
    return action;
}

void print_last_frame(char **map)
{
    for (int i = 0; map[i] != 0; i++){
        my_putstr(map[i]);
        my_putchar('\n');
    }
}

int display_map(char **map, variable openfile)
{
    int action = 0;
    char **map_tmp;

    initscr();
    keypad(stdscr, TRUE);
    while (1){
        action = game(map, action, openfile);
        if (action == -84){
            endwin();
            print_last_frame(map);
            return 84;
        }
        if (action == ' '){
            map_tmp = my_str_to_word_array(openfile);
            map = map_tmp;
        }
    }
    free_map(map_tmp);
    endwin();
    return 0;
}

int main(int ac, char **av)
{
    int return_to_func = 0;

    if (ac != 2)
        return 84;
    if (ac == 2){
        rulesgame(av);
        return_to_func = open_map(av);
    }
    return return_to_func;
}
