#include <stdio.h>

int main() 
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int a = sizeof(arr1) / sizeof(arr1[0]);
    int b = sizeof(arr2) / sizeof(arr2[0]);

    int merged[a + b];

    int i = 0, j = 0, k = 0;
    while (i < a && j < b) 
    {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }
    while (i < a) 
    {
        merged[k++] = arr1[i++];
    }

    while (j < b) 
    {
        merged[k++] = arr2[j++];
    }

    printf("Merged Array: ");
    for (i = 0; i < a + b; i++) 
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
