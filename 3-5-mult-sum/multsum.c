int sum_multiples (int number)
{
  int sum = 0;
  int i = 0;

  while (++i < number)
    {
      if (i % 3 == 0 || i % 5 == 0)
        sum += i;
    }

  return sum;
}
