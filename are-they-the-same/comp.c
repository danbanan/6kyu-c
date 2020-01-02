#include <string.h>
#include <stdbool.h>

bool comp(const int *a, const int *b, size_t n)
{
  int sum1 = 0;
  int sum2 = 0;
  int arr_a[n];
  int arr_b[n];

  memcpy(arr_a, a, n * sizeof(int));
  memcpy(arr_b, b, n * sizeof(int));

  for (int i = 0; i < n; i++)
    {
      sum1 += arr_a[i] * arr_a[i];
      sum2 += arr_b[i];
    }

  return sum1 == sum2;
}
