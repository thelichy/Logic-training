#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char line[50];
    char arr[50][10] = {};
    FILE *list = fopen("list.csv", "r");
    FILE *output = fopen("output.json", "w");

    for (int i = 0; fscanf(list, "%49[^\n]\n", line) == 1; i++)
    {
        strcpy(arr[i], line);
    }

    fprintf(output, "{\n");
    for (int j = 0; j < sizeof(arr); j++)
    {
        for (int k = 0; k < strlen(arr[j]); k++)
        {
            if (strcmp(&arr[j][k], ": ") == 0)
            {
                fprintf(output, "%s", arr[j][k]);
            }
            else if (strcmp(&arr[j][k], "\n") == 0)
            {
                fprintf(output, "\n,");
            }
            else
            {
                fprintf(output, "%s", arr[j][k]);
            }
        }
    }

    fprintf(output, "}");
    fclose(list);
    fclose(output);
    return 0;
}
