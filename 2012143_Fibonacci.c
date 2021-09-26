/**
 * Amogh Nagunoori(2012143)
**/
#include <stdio.h>

#define MAX 5000

void add(char num1[], char num2[], char result[])
{
  int carry = 0;
  for (int i = MAX - 1; i >= 0; i--)
  {
    int digit = (num1[i] - '0') + (num2[i] - '0') + carry;
    result[i] = (digit % 10) + '0';
    carry = digit / 10;
  }
}

void copy2on1(char num1[], char num2[])
{
  for (int i = MAX - 1; i >= 0; i--)
    num1[i] = num2[i];
}

char fib1[MAX];
char fib2[MAX];
char result[MAX];

int main()
{

  for (int i = 0; i < MAX; i++)
  {
    fib1[i] = fib2[i] = result[i] = '0';
  }
  fib2[MAX - 1] = '1';

  int n;
  scanf("%d", &n);

  if (n == 0 || n == 1)
  {
    printf("%c", n + '0');
  }
  else
  {
    for (int i = 2; i <= n; i++)
    {
      add(fibo1, fib2, result);
      copy2on1(fib1, fib2);
      copy2on1(fib2, result);
    }

    int start = 0;
    for (int i = 0; i < MAX; i++)
    {
      if (start == 0 && result[i] == '0')
        continue;

      if (start == 0 && result[i] != '0')
        start = 1;
      printf("%c", result[i]);
    }
    printf("\n");
  }
  return 0;
}
