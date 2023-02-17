#include "islands.h"



int main(int argc, char *argv[])
{
    island *beginning = NULL;
    island *i = NULL;
    island *next = NULL;
    char name[80];

    for (; fgets(name, 50, stdin) != NULL; i = next)
    {
        next = create_island(name);
        
        if (beginning == NULL)
        {
            beginning = next;
        }
        else if (i != NULL)
        {
            i->next_island = next;
        }
    }

    display_island(beginning);
    release_island(beginning);
    return 0;
}
