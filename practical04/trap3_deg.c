#include<stdio.h>
#include<math.h>

//we declare our variables, TanValues[N+1] in order to make the array a global variable
int N =12;  
double TanValues[13];

//we declare the two function that we used before
double degtorad(double deg);  
double traprule(int N);   

//in main function we calculate the values of tan() from 0 to N*5 degrees using the degtorad function and define the TanValues array, after that we call the traprule function to approximate the integral, and we compute the exact integral, then we print the 2 results
int main(){

int i;  
double deg, rad;
for (i=0; i<=N; i++){
  deg = i*5.0;
  rad = degtorad(deg);
  TanValues[i] = tan(rad);
}

double integral_approx = traprule(N); 
double integral_exact = log(2.0);   

printf("Your approximation of the intergal from x=0 degrees of the function tan(x) with respect to x is:\n%.5f\nThe exact solution is: \n%.5f\n", integral_approx, integral_exact);

}

//the function degtorad converting degrees to radians
double degtorad(double deg){  
return (deg * M_PI)/180.0;  

}

//we apply the trapezoidal rule to approximate the integral,we use the TanValues and calculate the area under the curve,then to get the total integral approximation we multiply the result by the width of each subinterval
double traprule(int N){  

int i;
double width, area = TanValues[0] + TanValues[N];
for(i=1; i<N; i++){
area += 2.0*TanValues[i];
}

width = degtorad((60.0 - 0 )/(2.0*N));
area = width*area;

return area;


}
