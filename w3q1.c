//Write a program to count numbers between 1 to 100 not divisible by 2, 3 and 5.
#include<stdio.h>
int main()
{
      int i=1,c;
      printf("The numbers from 1 to 50 which are not divisible\nby 2, 3 & 5 are:\n\n");
      for(i=1;i<=100;i++)
      {
            if((i%2!=0)&&(i%3!=0)&&(i%5!=0))
            {
                  printf("%d  ",i);
                  c++;
            }
      }
      return 0;
}