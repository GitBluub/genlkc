/*
** EPITECH PROJECT, 2020
** genereic linked list
** File description:
** data manipulation
*/

#include <unistd.h>
#include "node.h"

void node_swap_data(node_t *first, node_t *second)
{
    void *tmp = NULL;

    if (!first || !second)
        return;
    tmp = first->data;
    first->data = second->data;
    second->data = tmp;
}