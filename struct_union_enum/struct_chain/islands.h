#include <stdio.h>
#include <stdlib.h>
#include <string.h>




typedef struct island
{
    char *name;
    struct island *next_island;
} island;


island *create_island(char *name)
{
    island *i = malloc(sizeof(island));
    i->name = strdup(name);
    i->next_island = NULL;
    return i;
}


int display_island(island *n)
{
    for (; n->next_island != NULL; n = n->next_island)
        printf("Island %s at position %p\n\n", n->name, n);
    return 0;
}


int release_island(island *i)
{
    island *next = NULL;
    for (; i != NULL; i = next)
    {
        next = i->next_island;
        free(i->name);
        free(i);
    }
    printf("Memory clean\n");
    return 0;
}
