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

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

<<<<<<< HEAD
    const int min = min_element(arr, 10);
||||||| merged common ancestors
    const int min = min_element(arr, 7);
=======
    const int min = min_element(arr, N_ELEMENTS(arr));
>>>>>>> origin/develop

    printf("Array: ");
<<<<<<< HEAD
    int i;
    for (i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
||||||| merged common ancestors
    int i;
    for (i = 0; i < 7; ++i) {
        printf("%d ", arr[i]);
=======
    int i = 0;
    printf("%d", arr[i]);
    ++i;
    for (; i < N_ELEMENTS(arr); ++i) {
        printf(", %d", arr[i]);
>>>>>>> origin/develop
    }
    printf("\n");

    printf("Min element: %d\n", min);

    return 0;
}
