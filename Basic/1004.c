#include <stdio.h>
int main(void)
{
  int n, i, j;
  struct Stu
  {
    char name[11];
    char num[11];
    int grade;
  }stu[1000];
  struct Stu temp = { "0", "0", 0 };
  scanf("%d", &n);
  for(i = 0; i < n; i++)
  {
    scanf("%s %s %d", stu[i].name, stu[i].num, &stu[i].grade);
  }
  for(i = 0; i < n; i++)
  {
    for(j = i + 1; j < n; j++)
    {
      if(stu[i].grade < stu[j].grade)
      {
        temp = stu[i];
        stu[i] = stu[j];
        stu[j] = temp;
      }
    }
  }
  printf("%s %s\n", stu[0].name, stu[0].num);
  printf("%s %s\n", stu[n - 1].name, stu[n - 1].num);
  return 0;
}
