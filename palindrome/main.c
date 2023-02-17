#include <stdio.h>
#include <string.h>



int palindrome(char *string);


int main()
{
    char tex[80];
    printf("Verifies if the text is an palindrome\n");
    puts("Insert the text: ");
    fgets(tex, 80, stdin);
    printf("\n");

    int result = palindrome(tex);

    if (result)
    {
        puts("Is an palindrome");
    }
    else
    {
        puts("Not is an palindrome");
    }

    return 0;
}

int palindrome(char *string)
{
    for (int j = 0, len = strlen(string), mid = len / 2; j < mid; j++)
    {
        if (string[j] != string[len - j - 1])
        {
            return 0;
        }
    }

    return 1;
}

