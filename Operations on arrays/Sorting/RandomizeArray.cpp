#include <iostream>
#include <time.h>

void RandomizeArray(int *arr, int n, int min, int max)
{
  srand(time(NULL));
  for (int i = 0; i < n; i++, arr++)
    *arr = rand() % (max - min + 1) + min;
}
