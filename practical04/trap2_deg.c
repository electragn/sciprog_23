#include<stdio.h>
#include<math.h>

//we declare the function degtorad that we also use in the previous question and the function traprule which approximates the integral of the tangent function using the trapezoidal rule 
double degtorad(double deg);  
double traprule(int N);

//in our main function we set the N=12 and call the function traprule which approximates the integral and then we calculate the exact integral using the log(2.0) and  we print the two values
int main(){

int N = 12;  
double integral_approx = traprule(N);
double integral_exact = log(2.0);

printf("Your approximation of the intergal from x=0 degrees of the function tan(x) with respect to x is:\n%.5f\nThe exact solution is: \n%.5f\n", integral_approx, integral_exact);

}

//this function takes degrees as input and converts it to radiants
double degtorad(double deg){  
return (deg * M_PI)/180.0;  

}

/*we use the trapezoidal rule in order to approximate the integral of the tangent function, firt of all we calculate the values of tan() from 0 to N*5 degrees and store the result in the array TanValues, thenwe use the trapezoidal rule to compute the area under the curve, finally to get the total integral approximation we multiply the result by the width of each subinterval */  
double traprule(int N){

int i;  
double TanValues[N+1], deg, rad, width;
for (i=0; i<=N; i++){
  deg = i*5.0;
  rad = degtorad(deg);
  TanValues[i] = tan(rad);  
}

double area = TanValues[0] + TanValues[N];
for(i=1; i<N; i++){
area += 2.0*TanValues[i];
}

width = degtorad((60.0 - 0 )/(2.0*N));
area = width*area;

return area;


}


