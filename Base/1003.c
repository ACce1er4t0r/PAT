#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char s[101];
    int cntp = 0, cnta = 0, cntt = 0;
    char *p1, *p2;
    scanf("%d", &n);
    while (n--)
    {
        int ispat = 0;
        cntp = 0;
        cnta = 0;
        cntt = 0;
        scanf("%s", s);
        for(int j = 0; s[j] != '\0'; j++)
        {
            if(s[j] == 'P')
            {
              cntp++;
            }
            else if(s[j] == 'T')
            {
              cntt++;
            }
            else if(s[j] == 'A')
            {
              cnta++;
            }
            else
            {
                break;
            }
        }
        if(cntp == 1 && cntt == 1 && cnta != 0)
        {
            p1 = strchr(s, 'P');
            p2 = strchr(s, 'T');
            if(unsigned((p1 - s) * (p2 - p1 - 1)) == strlen(p2) - 1)
            {
                ispat = 1;
            }
        }
        if(ispat)
        {
          printf("YES\n");
        }
        else
        {
          printf("NO\n");
        }
    }
    return 0;
}
