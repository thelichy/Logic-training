// Incomplete


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};



int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    int min = 0;
    int max = sizeof(arr) / sizeof(arr[0]);
    int mid = (max + min) / 2;
    int i = mid;
    while (true)
    {
        if (arr[i] == n)
        {
            printf("Found at position %i", n);
            break;
        }
        else if (n > arr[i])
        {
            min = mid;
            mid = (min + max) / 2;
            i = mid;
        }
        else if (n < arr[i])
        {
            max = mid;
            mid = (min + max) / 2;
            i = mid;
        }
    }
    return 0;
}
