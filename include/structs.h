/*
** EPITECH PROJECT, 2020
** generec linked list
** File description:
** structs
*/

#ifndef structs_h
#define structs_h

#include <stdbool.h>

struct s_linked_list
{
    int info;
    struct s_linked_list *next;
};

typedef struct s_linked_list linked_list_t;

struct s_persona
{
    char *first_name;
    char *last_name;
    int age;
};
typedef struct s_persona persona_t;

struct s_ll_persona
{
    char *first_name;
    char *last_name;
    int age;
    struct s_ll_persona *next;
};

typedef struct s_ll_persona ll_persona_t;

persona_t *persona_create(char *first_name, char *last_name, int age);
void print_persona(persona_t *pers);
void persona_destroy(void *data);
//cmp
bool persona_first_name_cmp(void *data_1, void *data_2);
bool persona_last_name_cmp(void *data_1, void *data_2);
bool persona_age_cmp(void *data_1, void *data_2);

#endif /* !structs_h */
