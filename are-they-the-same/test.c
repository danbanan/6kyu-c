#include <stdio.h>
#include <criterion/criterion.h>
#include "comp.h"

Test (empty_suite, valid_non_empty_array_ordered)
{
  int arr1[] = {1, 2, 2, 3, 4};
  int arr2[] = {1, 4, 4, 9, 16};

  cr_assert(comp(arr1, arr2, 5));
}

Test (empty_suite, valid_non_empty_array_unordered)
{
  int arr1[] = {121, 144, 19, 161, 19, 144, 19, 11};
  int arr2[] = {121, 14641, 20736, 361, 25921, 361, 20736, 361};

  cr_assert(comp(arr1, arr2, 8));
}

Test (empty_suite, valid_empty_array)
{
  int *arr1 = NULL;
  int *arr2 = NULL;

  cr_assert(comp(arr1, arr2, 0));
}

Test (empty_suite, invalid_non_empty_array)
{
  int arr1[] = {121, 144, 19, 161, 19, 144, 19, 11};
  int arr2[] = {132, 14641, 20736, 361, 25921, 361, 20736, 361};

  cr_assert_not(comp(arr1, arr2, 8));
}

Test (empty_suite, invalid_non_empty_array_equal_sum)
{
  int arr1[] = {3, 4};
  int arr2[] = {0, 25};

  cr_assert_not(comp(arr1, arr2, 2));
}
