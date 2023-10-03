#include <stdio.h>
#include <time.h>
#include <stdlib.h>




int main() {
  // Initialization, should only be called once.
  srand(time(NULL)); 
  // Returns a pseudo-random integer between 0 and RAND_MAX.
  int r = rand() % 100;      
  int myNum;
  int min = r - 10;
  int max = r + 10;

  printf("Hello World!\n");

  printf("It's the number guessing game!\n");
  printf("You know the drill... guess the number: \n");
  printf("The random number generated is between %d and %d: \n", min, max);
  
  scanf("%d", &myNum);
  
  while (myNum != r)
  {
  printf("You entered: %d\n", myNum);
  printf("The random number generated was: %d\n", r);
  printf("Try again...\n");
  scanf("%d", &myNum);
  }
  
  printf("Congratulations!\n");
  printf("By guessing the correct number, you saved the world. Now fuck off.\n");

  return 0;
};