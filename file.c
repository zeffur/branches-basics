//Программа выявляет четные и нечетные числа в рандомном массиве,
//возводит их во вторую или третью степень соответственно,
//затем выводит на экран.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i;
  printf("Input number of elements:");
  scanf("%d", &n);
  int a[n], b[n];
  for (i = 0; i < n; i++) {
    a[i] = rand() % n;
    printf("%d ", a[i]);
  }
  printf("\n");
  for (i = 0; i < n; i++) {
    if (a[i] % 2)
      b[i] = pow(a[i], 3);
    else
      b[i] = pow(a[i], 2);
    printf("%d \n", b[i]);
  }
  system("PAUSE");
  return 0;
}
