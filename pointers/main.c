#include <stdio.h>

int increase(int *value)
{
  *value += 1;
  return 0;
}

int main()
{
  int x = 1;
  printf("Value: %i\Pointer: %p\n", x, &x);
  increase(&x);
  printf("Value: %i\Pointer: %p\n", x, &x);
  return 0;
}
