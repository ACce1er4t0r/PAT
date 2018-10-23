#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a[100], i, s = 0, b[100];
  char c[3000];
  gets(c);
  for (i = 0; c[i] != '\0'; i++)
  {
    b[i] = (int)c[i] - 48;
    s = s + b[i];
  }
  for (i = 0; i < 100 && s != 0; i++)
  {
    a[i] = s % 10;
    s /= 10;
  }
  for (i = i - 1; i >= 0; i--)
  {
    switch (a[i])
    {
      case 0 : printf("ling");
        break;
      case 1 : printf("yi");
        break;
      case 2 : printf("er");
        break;
      case 3 : printf("san");
        break;
      case 4 : printf("si");
        break;
      case 5 : printf("wu");
        break;
      case 6 : printf("liu");
        break;
      case 7 : printf("qi");
        break;
      case 8 : printf("ba");
        break;
      case 9 : printf("jiu");
        break;
    }
    if(i > 0)
    printf(" ");
  }
  return 0;
}
