/*
** EPITECH PROJECT, 2020
** generic linked list
** File description:
** structs create
*/

#include "structs.h"
#include <stdlib.h>
#include <string.h>

persona_t *persona_create(char *first_name, char *last_name, int age)
{
    persona_t *new = malloc(sizeof(persona_t));

    if (!new)
        return (NULL);
    new->first_name = strdup(first_name);
    new->last_name = strdup(last_name);
    new->age = age;
    return (new);
}