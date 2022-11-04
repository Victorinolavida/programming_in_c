#include <stdio.h>

main(){

  long character,input;

  while ( (input = getchar()) != EOF){

    if (input == ' ')
      ++character;

    if (input == '\t')
      ++character;

    if (input == '\n')
      ++character;
    
  }

  printf("total special characteres: %ld\n",character);
}
