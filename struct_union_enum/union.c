#include <stdio.h>



typedef union
{
    int age;
    float weigth
}
numbars;

int main()
{
    numbars x = {.weigth = 5.6};
    printf("%2.2f: weigth\n", x.weigth);
    return 0;
}
