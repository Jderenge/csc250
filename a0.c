#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int size;
    printf("array size: ");
    scanf("%d", &size);

    int array[size];
    srand(time(NULL));

    for (size_t i = 0; i < size; i++)
    {
        array[i] = rand() % 1001;
    }

    printf("min: %d\n", findMin(array, size));
    printf("max: %d\n", findMax(array, size));
    printf("sum: %d\n", findSum(array, size));
    printf("ave: %d\n", findAve(array, size));

    return 0;
}

int findMin(int arr[], int size)
{
    int min = 1000;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < min) { min = arr[i]; }
    }
    return min;
}

int findMax(int arr[], int size)
{
    int max = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > max) { max = arr[i]; }
    }
    return max;
}

int findSum(int arr[], int size)
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int findAve(int arr[], int size)
{
    return findSum(arr, size) / size;
}
