/*
** EPITECH PROJECT, 2020
** GENERIC LINKED LIST
** File description:
** structs destroy
*/

#include "structs.h"
#include "node.h"
#include <stdlib.h>

void str_destroy(void *data)
{
    if (data)
        free(data);
}

void persona_destroy(void *data)
{
    persona_t *persona = NULL;

    if (!data)
        return;
    persona = (persona_t *)data;
    if (persona->first_name)
        free(persona->first_name);
    if (persona->last_name)
        free(persona->last_name);
    free(persona);
}