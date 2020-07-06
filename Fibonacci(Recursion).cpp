#include<stdio.h>
#include<conio.h>
int f(int);

int main()
{
  int n, i = 0, c;
  printf("\nEnter no of terms");
  scanf("%d", &n);
  printf("Fibonacci series terms are:\n");
  for (c = 1; c <= n; c++)
  {
    printf("%d ", f(i));
    i++;
  }
  return 0;
}
int f(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (f(n-1) + f(n-2));
}
