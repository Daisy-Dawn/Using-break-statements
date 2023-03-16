#include <stdio.h>
#include <stdlib.h>

//This program allows a user to input 5 integers (using for loop instead of hard coding) which in turn sums all. If a number enetered by user is a negative number, the loop should be exited hence calcaulating only the numbers enetered by user before the negative number

int main(void) 
{
  int a, i, sum = 0;

  for (i = 1; i <= 5; i++)
    {
      printf("Enter a number:\t");
      scanf("%d", &a);

      if (a < 0)
      {
        printf("Negative number not included\n");
      break;  
      }   

  sum = sum + a;
      }
  printf("\nsum = %d\n", sum);
  
  printf("\n\nEnd of program\n");
  sleep(5);
  system("clear");
  printf("Welcome User\n");
  
  return 0;
}