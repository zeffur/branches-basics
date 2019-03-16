#include <stdio.h>

#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(*(arr)))

int min_element(int* arr, int size)
{
    int min = *arr;

    int* it;
    for (it = arr + 1; it < arr + size; ++it) {
        if (*it < min) {
            min = *it;
        }
    }

    return min;
}

void print_array(int* arr, int size)
{
<<<<<<< HEAD
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    const int min = min_element(arr, 10);

||||||| merged common ancestors
    int arr[] = {3, 1, 4, 1, 5, 9, 2};

    const int min = min_element(arr, 7);

=======
>>>>>>> origin/develop
    printf("Array: ");
    int i;
<<<<<<< HEAD
    for (i = 0; i < 10; ++i) {
||||||| merged common ancestors
    for (i = 0; i < 7; ++i) {
=======
    for (i = 0; i < size; ++i) {
>>>>>>> origin/develop
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2};

    const int min = min_element(arr, N_ELEMENTS(arr));

    print_array(arr, N_ELEMENTS(arr));
    printf("Min element: %d\n", min);

    return 0;
}
