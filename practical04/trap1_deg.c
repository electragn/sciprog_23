#include<stdio.h>
#include<math.h>

//we declare the function degtorad which takes degrees as argument and returns radiants  
double degtorad(double deg);

int main(){

//we declare our variables N,i,dag (to store the degrees), rad (to store the radians) and the array TanVlues (to store the tangent values) 
int N = 12, i;
double TanValues[N+1], deg, rad;

//we use for loop to calculte the angle in degrees and convert it to radians using the function degtorad, also we calculate the tangen using the tan function, store the results in the Tanvalues arrays and finally print the result  
for (i=0; i<=N; i++){
  deg = i*5.0;
  rad = degtorad(deg);
  TanValues[i] = tan(rad);
  printf("TanValues[%d] = %f at x=%f degrees\n", i , TanValues[i], deg);
}


}
//we declare the degtorad function which takes an angle in degrees and converts it to radians 
double degtorad(double deg){
 return (deg * M_PI)/180.0;

}
