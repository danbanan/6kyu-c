#include <criterion/criterion.h>
#include "multsum.h"

Test (multiply_function, passing)
{
  int sum = sum_multiples(10);
  cr_assert_eq(sum, 23, "Given %d expected 23", sum);
}
