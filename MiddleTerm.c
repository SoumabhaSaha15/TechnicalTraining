#include <stdio.h>
int main(void)
{
  int a, b, c, large, small;
  printf_s("enter A,B,C: ");
  scanf_s("%d,%d,%d", &a, &b, &c);
  if (a > b)
  {
    large = a;
    small = b;
  }
  else
  {
    large = b;
    small = a;
  }
  if (c > large)
    printf_s("second largest: %d", large);
  else if (large > c && c > small)
    printf_s("second largest: %d", c);
  else
    printf_s("second largest: %d", small);
}