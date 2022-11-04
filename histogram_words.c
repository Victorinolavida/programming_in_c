#include <stdio.h>

#define IN 1
#define OUT 0

main(){
  int c,state,length;
  int narray[10];
  
  for (int i = 0; i<10; ++i)
    narray[i]=0;

  length = 0;
  state = OUT;
  while ((c = getchar()) != EOF){
    if (c==' ' || c == '\t' || c == '\n'){
      if (length < 10)
        ++narray[length-1];
      length = 0;
    }else{
      ++length;
    }
  }


  for( int i = 0; i<10; ++i){
    printf("word of length %d   ",i+1);
    for (int j = 0; j < narray[i];++j)
      printf("*");
    printf("\n");
  }
  printf("\n");
  printf("\n");

  int MAX;
  MAX = 0;
  for (int i = 0; i < 10; ++i){
    if ( narray[i] >= MAX)
      MAX = narray[i];
  }

  int DONE = 0;

  while (DONE < MAX){
    for(int j = 0; j <10; ++j)
      if(DONE == 0)
        printf("ha");
      if(narray[j]>0){
        printf("* ");
        --narray[j];
      }else{
        printf(" ");
      }
    printf("\n");
    ++DONE;
  }

  
}
