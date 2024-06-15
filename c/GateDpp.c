#include<stdio.h>
void f(int n) {
  static int i = 3;

  if (n % 2) {
    n += i--;
    printf("%d", n);
    f(n - 1);
  }

  n++;
  printf("%d", n);
}

int main()
{
    f(5);
}