/*
** EPITECH PROJECT, 2020
** GENERIC LINKED LIST
** File description:
** main
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "node.h"
#include "structs.h"

char *my_strlowcase(char *str_target)
{
    char *str = strdup(str_target);

    for (int i = 0; str[i] != 0; i++)
        if (str[i] <= 'Z' && str[i] >= 'A')
            str[i] += 32;
    return (str);
}

bool alpha_cmp(void *data_1, void *data_2)
{
    char *str1 = my_strlowcase((char *)data_1);
    char *str2 = my_strlowcase((char *)data_2);
    bool res = false;

    if (strcmp(str1, str2) > 0)
        res = true;
    free(str1);
    free(str2);
    return (res);
}
/*

int main(int ac, char **av)
{
    node_t *list = NULL;
    node_t *tmp = NULL;

    for (int i = 1; i < ac; i++)
        add_to_list(&list, node_create_with_data(strdup(av[i])));
    list_bubble_sort(list, alpha_cmp);
    for (tmp = list; tmp; tmp = tmp->next)
        printf("%s\n", (char *)tmp->data);
    list_destroy(list, str_destroy);
}
*/

int main(int ac, char **av)
{
    node_t *list = NULL;
    node_t *tmp = NULL;

    if (ac % 3 != 1)
        return (84);
    for (int i = 1; i < ac; i += 3)
        add_to_list(&list, node_create_with_data(persona_create(av[i], av[i + 1], atoi(av[i + 2]))));
    list_bubble_sort(list, persona_first_name_cmp);
    for (tmp = list; tmp; tmp = tmp->next)
        print_persona((persona_t *)tmp->data);
    list_destroy(list, persona_destroy);
}
