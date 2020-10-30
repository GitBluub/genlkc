/*
** EPITECH PROJECT, 2020
** generic linked list
** File description:
** persona functions
*/

#include "node.h"
#include "structs.h"
#include <stdio.h>

bool persona_age_cmp(void *data_1, void *data_2)
{
    persona_t *pers_1 = (persona_t *)data_1;
    persona_t *pers_2 = (persona_t *)data_2;

    return (pers_1->age > pers_2->age);
}

bool persona_first_name_cmp(void *data_1, void *data_2)
{
    persona_t *pers_1 = (persona_t *)data_1;
    persona_t *pers_2 = (persona_t *)data_2;

    return (alpha_cmp((void *)pers_1->first_name, (void *)pers_2->first_name));
}

bool persona_last_name_cmp(void *data_1, void *data_2)
{
    persona_t *pers_1 = (persona_t *)data_1;
    persona_t *pers_2 = (persona_t *)data_2;

    return (alpha_cmp((void *)pers_1->last_name, (void *)pers_2->last_name));
}

void print_persona(persona_t *pers)
{
    printf("----------------------\n\n");
    printf("NAME: %s %s\n", pers->last_name, pers->first_name);
    printf("AGE: %d\n", pers->age);
    printf("\n----------------------\n");
}