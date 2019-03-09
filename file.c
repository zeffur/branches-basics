#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i;
  printf("Input number of elements:"); // ввод количества элементов в массиве
  scanf("%d", &n);
  int a[n], b[n];
  for (i = 0; i < n; i++) { //заполняем массив рандомными числами от 0 до n
    a[i] = rand() % n;
    printf("%d ", a[i]);
  }
  printf("\n");
  for (i = 0; i < n; i++) { //проверяем на условие четности/нечетности
    if (a[i] % 2)
      b[i] = pow(a[i], 3); //если нечетно - возводим в третью степень
    else
      b[i] = pow(a[i], 2); //если четно - во вторую
    printf("%d \n",
           b[i]); //вывод второго массива с уже возведенными в степень числами
  }
  system("PAUSE");
  return 0;
}
