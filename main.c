// Author: Mack Mason mjm8542@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n) {
  if(n > 0) {
    int remainder = (n % 10);
    return remainder + digit_sum(n/10);
  }
  else {
    return 0;
  }
}


void run() {
  char *userInput  = readline("Enter an int: ");
  int userInt = atoi(userInput);
  int digitSum = digit_sum(userInt);
  printf("sum of digits of %s is %d.\n",userInput,digitSum);
}

int main(void) {
  run();
  return 0;
}
