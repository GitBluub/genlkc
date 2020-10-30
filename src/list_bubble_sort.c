/*
** EPITECH PROJECT, 2020
** generic linked list
** File description:
** list bubble sort
*/

#include <unistd.h>
#include "node.h"

void list_bubble_sort(node_t *list, bool (*cmp)(void *, void *))
{
    int nb_of_nodes = list_len(list);
    node_t *current = list;
    node_t *prev = NULL;

    if (!current->next)
        return;
    else {
        prev = current;
        current = current->next;
    }
    for (int i = 0; i < nb_of_nodes - 1 && current; i++) {
        if (cmp(prev->data, current->data)) {
            node_swap_data(prev, current);
            i = -1;
            current = list->next;
            prev = list;
        } else {
            prev = current;
            current = current->next;
        }
    }
}