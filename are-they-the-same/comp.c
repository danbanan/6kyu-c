#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int compare_ints(const void* a, const void* b)
{
  const int arg_a= *(const int*)a;
  const int arg_b = *(const int*)b;

  return arg_a - arg_b;
}

bool comp(const int *a, const int *b, size_t n)
{
  int arr_a[n];
  int arr_b[n];

  memcpy(arr_a, a, n * sizeof(int));
  memcpy(arr_b, b, n * sizeof(int));

  qsort(arr_a, n, sizeof(int), compare_ints);
  qsort(arr_b, n, sizeof(int), compare_ints);

  for (int i = 0; i < n; i++)
    if (arr_b[i] - (arr_a[i] * arr_a[i]))
      return false;

  return true;
}
