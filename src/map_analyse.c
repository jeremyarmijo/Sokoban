/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/

void print_and_free_2darr(int nb, char **map)
{
    int i = 0;

    for (i = 0; i < nb; i++){
            my_printf("%s\n", map[i]);
        }
    for (i = 0; i < nb; i++){
        free(map[i]);
    }
    free(map);
}

char **rempli_map(int nbline, int nb_char, const char *map, char **mapc)
{
    int cpt = 0;
    int c2 = 0;

    for (cpt = 0; nbline > cpt; cpt++){
        for (; map[nb_char] != '\n'; nb_char++) {
            mapc[cpt][c2] = map[nb_char];
            c2++;
        }
        nb_char++;
        c2 = 0;
    }
    return mapc;
}

char *map(char *av)
{
    struct stat buf;
    int statsize = 0;
    char *buffer;
    int stat_return = 0;

    stat_return = stat(av, &buf);
    if (stat_return == -1){
        return NULL;
    }
    statsize = buf.st_size;
    buffer = malloc((statsize + 1) * (sizeof(char)));
    buffer[statsize] = 0;
    return buffer;
}

int error_size_char(int get_number, int nb_line, char *buffer)
{
    if (get_number == nb_line){
        nb_line_equal_line_one(buffer, nb_line);
    } else {
        return 84;
    }
    if (get_number == -1)
        return 84;
    return 0;
}

int mapanalyse(char **av)
{
    int fail = 0;
    char *buffer;
    int mapsize = 0;
    int nb_line = 0;
    int get_number = 0;

    buffer = map(av[1]);
    if (buffer == NULL)
        return 84;
    mapsize = filesize(av[1]);
    if (mapsize == 0)
        return 84;
    fail = error(av[1], buffer, mapsize);
    get_number = my_get_number(buffer);
    nb_line = my_strlen_nb_line(buffer);
    fail = error_size_char(get_number, nb_line, buffer);
    return fail;
}
