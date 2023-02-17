#include <stdio.h>



typedef struct
{
    char *hobby;
}
hobbies;


typedef struct
{
    char *name;
    unsigned short int age;
    hobbies hobby;
}
person;


int main()
{
    person boy = {"cool", 15, "code"};
    printf("Name: %s, age: %hu and hobby: %s", boy.name, boy.age, boy.hobby);
    return 0;
}
