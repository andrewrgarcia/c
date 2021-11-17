/* A simple c code example which shows you how to pass inputs as arguments in terminal with a c program. 
   Andrew Garcia, 2021
*/

#include <stdio.h>

int main( int argc, char *argv[] )  {

   printf("\nprinting all written inputs here:");
   for(int i=1; i < argc; i++){
      printf("\n* %s",argv[i]);
   }
   printf("\n");

   printf("\nprinting only the first and last written inputs here:");
   printf("\nyou wrote \"%s\" first",argv[1]);
   printf("\nyou wrote \"%s\" last",argv[argc-1]);
   printf("\n");

}