#ifndef LLIST_H_
#define LLIST_H_

#include <stdint.h>

typedef intptr_t val_t;

typedef struct node {
    val_t data;
    struct node *next;
} node_t;

typedef struct llist {
    node_t *head;
    uint32_t size;
} llist_t;

llist_t *list_new();
llist_t *list_add(llist_t *the_list, val_t val);
void list_print(llist_t *the_list);
node_t *list_nth(llist_t *the_list, uint32_t index);

#endif
