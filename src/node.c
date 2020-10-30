/*
** EPITECH PROJECT, 2020
** GENERIC LINKED LIST
** File description:
** node functions
*/

#include <unistd.h>
#include <stdlib.h>
#include "node.h"

node_t *node_create(void)
{
    node_t *new = malloc(sizeof(node_t));

    if (!new)
        return (NULL);
    new->data = NULL;
    new->next = NULL;
    new->prev = NULL;
    return (new);
}

void node_destroy(node_t *curr)
{
    if (curr)
        free(curr);
}

void node_set_data(node_t *curr, void *data)
{
    if (!curr) {
        write(2, "Set data: invalid node\n", 23);
        return;
    }
    curr->data = data;
}

node_t *node_create_with_data(void *data)
{
    node_t *new = node_create();

    if (!new)
        return (NULL);
    node_set_data(new, data);
    return (new);
}