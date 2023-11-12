#include<stdio.h>

int main (){

//we define our variables
int i1 = 10;
int i2 = 200;
float fl1 = 1.11;
float fl2 = 2.2222;

//we print the values for i1,i2,fl1 and fl2, we set the format for integers by %d and for floats by %f (for floats also specify the number of digits after the decimal point .2 & .4) 
printf("Two ints %d %d and two floats %.2f %.4f\n", i1, i2, fl1, fl2);

return 0;


}
