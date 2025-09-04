#include <stdio.h>
#include <stdlib.h>
#include "FindMissingNumbers.h"

int main()
{
    printf("==============================\n");
    int arr[] = {1,4,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxRange = 10;
    FindMissingNumbers(arr,n,maxRange);
    printf("==============================\n");
    return 0;
}
