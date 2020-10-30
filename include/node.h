/*
** EPITECH PROJECT, 2020
** LINKED LIST FOR NOOBS
** File description:
** header
*/

#ifndef node_h
#define node_h

//QualityOfLife includes
#include <stdbool.h>
#define NULL ((void *)0)

struct s_node
{
    void *data;
    struct s_node *next;
    struct s_node *prev;
};

typedef struct s_node node_t;

//node
void node_set_data(node_t *curr, void *data);
node_t *node_create(void);
node_t *node_create_with_data(void *data);
void node_destroy(node_t *curr);
//node data manipulations
void node_swap_data(node_t *first, node_t *second);
//list
void list_destroy(node_t *first, void (*func)(void *));
node_t *get_end_of_list(node_t **list);
void add_to_list(node_t **list, node_t *new);
int list_len(node_t *first);
void list_bubble_sort(node_t *list, bool (*func)(void *, void *));
//sorts
bool alpha_cmp(void *data_1, void *data_2);
//structs create

//structs destroy
void str_destroy(void *data);

#endif /* !node */
