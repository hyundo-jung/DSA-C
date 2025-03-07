#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int len;

    printf("Size of the array: ");
    scanf("%d", &len);

    int* arr = malloc(sizeof(int) * len);

    for (int i = 0; i < len; i++)
    {
        printf("element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int swapped, temp;

    // sorting in ascending order
    for (int i = 0; i < len - 1; i++)
    {
        swapped = 0;

        // len - i - 1 bc we know the last element of the array is sorted
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }

            if (swapped == 0)
            {
                break;
            }
        }
    }

    printf("Sorted array: \n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
