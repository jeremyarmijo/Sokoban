/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** game in terminal
*/
#include <sys/stat.h>
#include <stdarg.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>
#include <pwd.h>
#include <fcntl.h>
#include <unistd.h>
#include <ncurses.h>
#include <curses.h>
#ifndef MY
    #define MY
    #define MAP_C1 openfile.buffer[i] == '#'
    #define MAP_C2 openfile.buffer[i] == '\n'
    #define MAP_C3 openfile.buffer[i] == 'O'
    #define MAP_C4 openfile.buffer[i] == ' '
    #define MAP_C5 openfile.buffer[i] == 'X'
    #define MAP_C6 openfile.buffer[i] == 'P'
    #define CMP_C1 map[pos_p.y][pos_p.x + 2] == '#'
    #define CMP_C2 map[pos_p.y - 2][pos_p.x] == '#'
    #define CMP_C3 map[pos_p.y + 2][pos_p.x] == '#'
    #define CMP_C4 map[pos_p.y][pos_p.x - 2] == '#'

typedef struct variable {
    int sizefile;
    int size;
    int fd;
    char *buffer;
    int rtrn_stat;
    int file_not_m;
    int error;
    int nb_o;
}variable;

typedef struct nb_cpt {
    int cpt_p;
    int cpt_O;
    int cpt_X;
}cpt_t;

typedef struct pos {
    int x;
    int y;
}pos_t;

void my_putchar(char c);
int display_map(char **map, variable openfile);
variable init_nb_p_o_x(variable openfile, int i, cpt_t *cpt_nb);
void free_map(char **mapc);
variable cmp_map_nb_o(variable openfile, int i, char **map, int cpt);
int check_nb_o_map(char **map, variable openfile);
int nb_o_x(variable openfile);
char **mouvs(int action, char **map, variable openfile);
void m_position(int nb_O, char **map);
int map_limit(char **mapc, variable openfile);
pos_t position(pos_t pos_p, char **map, char wich_char);
char **mouv_p_left(char **map, variable openfile);
char **mouv_p_down(char **map, variable openfile);
char **mouv_p_up(char **map, variable openfile);
char **mouv_p_right(char **map, variable openfile);
int open_map(char **av);
char *my_strdup(char const *src);
char **my_str_to_word_array(variable openfile);
char **rempli_map(int nbline, variable openfile, char **mapc);
int my_strlen_nb_line(variable openfile);
int my_strlen_nb_char(variable openfile);
int my_putstr(char const *str);
int file_not_map(variable openfile);
int error(variable openfile);
int my_strlen(const char *str);
void rulesgame(char **av);

#endif
