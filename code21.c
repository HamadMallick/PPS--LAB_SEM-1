#include<stdio.h>
int main()
{
  int c=0,n;
  printf("enter a number");
  scanf("%d",&n);

    if (n <= 1)
    {
        printf("Not a prime number");
    }
      for(int j=2;j<n;j++)
      {
         if(n%j==0)
         {
          c++;
         }
      }
      if(c==0)
      {
          printf("prime number");
      }
      else
      {
          printf("not prime number");
      }
  return 0;
  }





