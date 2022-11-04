#include <stdio.h>


main(){
  
 int c,d;

 while ((c = getchar()) != EOF){
   
  // if the caracter is not white space . it's printing on screen
   if ( c != ' ' ){
    putchar(c);
   }else{
     //if the previous character is not a white space, a white space and
     //only a one white space is printed
    if (d != ' '){
      putchar(c);
    }
   }
    //getting the last character from the current character "c" 
   d = c;
   
   
 }

}

