#include <stdio.h>

int main(void)
{

  for (int i = 1; i <= 100; i++)
  {
    if (i % 3 != 0)
    {
      if (i % 5 != 0)
      {
        printf("%d\n", i);
      }
      else
      {
        printf("Buzz\n");
      }
    }
    else
    {
      if (i % 5 != 0)
      {
        printf("Fizz\n");
      }
      else
      {
        printf("FizzBuzz\n");
      }
    }
  }
}
