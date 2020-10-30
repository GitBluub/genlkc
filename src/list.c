/*
** EPITECH PROJECT, 2020
** GENERIC LINKED LIST
** File description:
** list
*/

#include <stdlib.h>
#include <unistd.h>
#include "node.h"

node_t *get_end_of_list(node_t **list)
{
    node_t *tmp = NULL;

    if (!list)
        return (NULL);
    if (!(*list))
        return (NULL);
    tmp = *list;
    while (tmp->next)
        tmp = tmp->next;
    return (tmp);
}

void add_to_list(node_t **list, node_t *new)
{
    node_t *end = get_end_of_list(list);

    if (!list)
        return;
    if (!end)
        *list = new;
    else {
        end->next = new;
        new->prev = end;
    }
}

void list_destroy(node_t *first, void (*destroy)(void *))
{
    node_t *tmp = first;
    node_t *next = NULL;

    while (tmp) {
        next = tmp->next;
        destroy(tmp->data);
        free(tmp);
        tmp = next;
    }
}

int list_len(node_t *first)
{
    int result = 0;
    node_t *tmp = first;

    while (tmp) {
        result++;
        tmp = tmp->next;
    }
    return (result);
}