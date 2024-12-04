#include <stdio.h>
int main(void)
{
  int i = 0, j = 1, k = 2, l;
  l = i++ && j++ || ++k;
  /*
  in && or logical and operation left hand so=ide is evaluated
  first i returns 0 and logical and operator evals 0 skipping every other evaluation so j++ is skipped
  then i is incremented by 1 because it is inthe left side
  */
  printf("%d %d %d %d",i,j,k,l);
}