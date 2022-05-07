#include <stdio.h>

int main(void) {
   double age;
   double weight;
   double heartrate;
   double minutes;
   double women;
   double men;

   scanf("%lf", &age);
   scanf("%lf", &weight);
   scanf("%lf", &heartrate);
   scanf("%lf", &minutes);

   women = ( (age * 0.07) - (weight * 0.06) + (heartrate * 0.45) - 20.40 ) * minutes / 4.18;
   men = ( (age * 0.20) + (weight * 0.09) + (heartrate * 0.63) - 55.09) * minutes / 4.18;

   printf("women: %0.2lf \n", women);
   printf("men: %0.2lf \n", men);
   /* Type your code here. */

   return 0;
}
