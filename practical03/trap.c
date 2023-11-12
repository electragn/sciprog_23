#include<stdio.h>
#include<math.h>

int main(){

//we initialise the end-points (x_0 - 1st) &  (x_12 - last) and the number of points (N), width give us the width of each individual trapezodial  
int N = 12;
double x_0 = 0.0;
double x_12 = M_PI/3.0;
double width = (x_12 - x_0)/(double)N;


//we calculate the sum of the function tan(x) at the end-points 
double X = tan(x_0)+tan(x_12);  


//we use for loop to calculate the values of tan(x) at equidistant points, store it and then add 2 * tan(x) to the sum for each point
double x;
double y;
double sum = X;

int i; 
for(i=1; i<12; i++){
  x = x_0 + width*i; 
  y = tan(x);
  sum += 2*y;
}

//we use the trapezontial rule to calculate the approximate value of the integral
double integral_approx= sum * width * 0.5;

//we use the mathematical function to calculate the exact value of the integral
double integral_exact = log(2.0);

//we print the approximate and exact value of the integral
printf("Your approximation of the integral from x=0 to x=pi/3 of the function tan(x) with respect to x is:\n%.5f\nThe exact solution is:\n%.5f\n",integral_approx, integral_exact);


return(0);




}
