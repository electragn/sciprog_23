#include <stdio.h>


int main(void) {

//we declare our variables
int i;
float sum1, sum2, diff;
   

//we calculate the first sum using a for loop that iterates from 1 to 1000
sum1 = 0.0;
for (i=1; i<=1000; i++) {
  sum1 += 1./i;
}


//we calculate the second sum using a for loop that iterates from 1000 to 1 
sum2 = 0.0;
for (i=1000; i>0; i--) {
  sum2 += 1./i;
}

//we print the values of sum1 and sum2
printf(" Sum1=%f\n",sum1);
printf(" Sum2=%f\n",sum2);


//we compute the difference between sum1 and sum2 and store it in a new variable diff
diff = sum1 - sum2;


//we print the difference
printf(" Difference between the two is %f\n",diff);

return 0;

}

