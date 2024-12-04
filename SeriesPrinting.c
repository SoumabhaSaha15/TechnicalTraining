#include <stdio.h>
int fibonacci(int n)
{
  return (n == 1 || n == 2) ? (1) : (fibonacci(n - 1) + fibonacci(n - 2));
}

void generateSeries(int n)
{
  int multipleOfTwo = 2;
  int fibIndex = 1;
  printf("Generated Series: ");
  for (int i = 1; i <= n; ++i)
  {
    if (i % 2 != 0)
    {
      printf("%d, ", multipleOfTwo);
      multipleOfTwo += 2;
    }
    else
    {
      printf("%d, ", fibonacci(fibIndex));
      fibIndex++;
    }
  }
  printf("\b\b \n");
}

int sumOfNaturalNumbers(int n)
{
  return (n * (n + 1)) / 2;
}

int calculateSeries(int terms)
{
  int result = 0;
  for (int i = 1; i <= terms; ++i)
  {
    int currentSum = sumOfNaturalNumbers(i);
    result += (i % 2 == 0)?(-currentSum):(currentSum);
  }
  return result;
}

int main(void)
{
  int n;
  printf("Enter the number of terms to generate: ");
  scanf("%d", &n);
  generateSeries(n);
}
