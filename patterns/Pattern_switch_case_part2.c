//A program of switch case with 4 different types of triangle.
#include<stdio.h>
int main()
{
  int ch,i,j,k;
  printf("Enter 1 for Right Inclined Triangle\nEnter 2 for Inverted Right Inclined Triangle\nEnter 3 for Left Inclined Triangle\nEnter 4 for Inverted Left Inclined Triangle\n");
  scanf("%d",&ch);
  switch(ch)
  {
      case 1:
          {
              printf("Right-Angled Triangle\n");
              for(i=1;i<=5;i++)
              {
                  for(j=1;j<=i;j++)
                      printf("*");
                printf("\n");
              }
              break;
          }
      case 2:
      {
          printf("Inverted Right-Angled Triangle\n");
          for(i=5;i>0;i--)
          {
              for(j=1;j<=i;j++)
                  printf("*");
              printf("\n");
          }
          break;
      }
      case 3:
          {
              printf("Left Inclined Triangle\n");
              for(i=1;i<=5;i++)
              {
                  for(j=1;j<=5-i;j++)
                      printf(" ");
                  for(k=1;k<=i;k++)
                      printf("*");
                  printf("\n");
              }
              break;
          }
      case 4:
          {
              printf("Inverted Left Inclined Triangle\n");
              for(i=1;i<=5;i++)
              {
                  for(j=1;j<i;j++)
                      printf(" ");
                  for(k=0;k<=5-i;k++)
                      printf("*");
                  printf("\n");
              }
              break;
          }
  }
return 0;
}
