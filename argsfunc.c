/* A c example which shows:
   how to make a function call inside another function,
   convert char to int,
   make a conditional statements AND 
   use args input

   Andrew Garcia, 2021
*/

#include <stdio.h>
#include <stdlib.h>  // Need this module to use atoi()


int simplesum(int x, int y){
   return x+y;
}

int main( int argc, char *argv[] )  {
   // printf("%u",argc);
   if (argc == 4){
      int x = atoi(argv[2]);
      int y = atoi(argv[3]);
      int ssum = simplesum(x,y);

      if (ssum < 10){
         printf("\nSum with ID %s is less than 10\n",argv[1]);

      } else if (ssum >= 10 && ssum < 50){
         printf("\nSum with ID %s is between 10 and 50\n",argv[1]);

      } else{
         printf("\nSum with ID %s is greater than 50\n",argv[1]);

      }

   } else {
      printf("\nNeed 3 input args: [ID] [first number for sum] [second number for sum]\n");

   }

}