#include <stdio.h>
int main(void)
{
  int a, b, c;
  printf_s("enter A,B,C: ");
  scanf_s("%d,%d,%d", &a, &b, &c);
  if (a > b && a > c)
    printf_s("largest: %d", a);
  else if (b > c)
    printf_s("largest: %d", b);
  else
    printf_s("largest: %d", c);
}