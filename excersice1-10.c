#include <stdio.h>


main(){
  
  int c,d;



  while (( c = getchar())!= EOF){
   
    int escaped = 0;

    if (c == '\t'){
      putchar('\\');
      putchar('t');
      escaped = 1;
    }
    if (c == '\\'){
      putchar('\\');
      putchar('\\');
      escaped = 1;
    }
    
    if (c == '\b'){
      putchar('\\');
      putchar('b');
      escaped = 1;
    }
    
    if (escaped == 0)
    putchar(c);

  }

}
