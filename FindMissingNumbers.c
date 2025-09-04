#include "FindMissingNumbers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void FindMissingNumbers(int *arr, int n, int maxRange)
{
    int *ptr = (int*) malloc ((maxRange + 1) * sizeof(int));
    if (ptr == NULL)
    {
        printf("Dynamic Allocation Failed");
        return;
    }
    printf("Initial Values : ");
    for (int i = 0; i <= maxRange; i++)
    {
        ptr[i] = 0;
        printf("%d, ", ptr[i]);
    }
    printf("\n");
    printf("Present Values : ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= maxRange)
        {
            ptr[arr[i]] = 1;
            printf("%d, ", arr[i]);
        }
    }
    printf("\n");
    printf("Missing Values : ");
    for (int i = 1; i <= maxRange; i++)
    {
        if (ptr[i] == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");
    free(ptr);
}
