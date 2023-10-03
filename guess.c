#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int getIntInput() {
  int myNum;
  printf("==> ");
  scanf("%d", &myNum);
  // TODO
  // typecheck myNum, handle any errs
  return myNum;
}

int main() {
  // https://stackoverflow.com/questions/822323/how-to-generate-a-random-int-in-c
  // Initialization, should only be called once.
  srand(time(NULL)); 
  // Returns a pseudo-random integer between 0 and RAND_MAX, modulo 100 to keep it small.
  int r = rand() % 100;      
  int min = r - 10;
  int max = r + 10;

  char greeting[] = "Hello World!";
  printf("%s\n", greeting);

  printf("It's the number guessing game!\n");
  printf("The random number generated is between %d and %d: \n", min, max);
  printf("You know the drill... guess the number: \n");
  
  int myNum = getIntInput();
  while (myNum != r)
  {
  printf("You entered: %d\n", myNum);
  printf("Try again...\n");
  myNum = getIntInput();
  }
  
  printf("Congratulations!\n");
  printf("You guessed the correct number and saved the world. Now fuck off.\n");

  return 0;
};

