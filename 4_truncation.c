#include <stdio.h>
#include <cs50.h>

int main(void)
{

  // Get numbers from user 
  int x = get_int("x: ");
  int y = get_int("y: ");

  // Calculation & printing out
  float z = (float) x / (float) y;
  printf("%f \n", z);

}
