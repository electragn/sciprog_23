#include<stdio.h>
#include<math.h>
#include <stdlib.h>

//declare the two functions arctanh1 & arctanh2
double arctanh1(const double x, const double delta);
double arctanh2(const double x);

int main(){


  double delta,x;
  
  printf("Enter the precision for the Maclaurin series:\n");
  scanf("%lf", &delta);
 
  //check if the entered precision is a positive value, if so print an error message and then exit the program with the code 1 
  if(delta<=0){
    printf("Invalid input for precision.\n");
    exit(1);
  }

  int length=1000;
  //storing the result of arctan1 in the array tan1
  double tan1[length];
  //storing the result of arctan2 in the array tan2 
  double tan2[length];

  //j: array index
  int j=0;
  x=-0.9;
  //this loop calculate and print the differenced for the different x values 
  while(x<=0.9 && j<length){
    tan1[j]=arctanh1(x, delta);
    tan2[j]=arctanh2(x);
    printf("The difference at x=%lf between them is %.10lf.\n", x, fabs(tan1[j]-tan2[j]));
    j++;
    x=x+0.1;
  }

  return 0;

}

//calls the function archtan1 which calculates he arctangent hyperbolic using the Maclaurin series with a given precision delta
double arctanh1(const double x, const double delta){
  //approximation 
  double arcTan=0;
  //element in the series  
  double elem, val;
  //sum parameter
  int n=0; 

  //the do-while loop add terms to the series until the value of the elem becomes less that the specified precision delta 
  do{
    val=2*n+1;
    elem=pow(x, val)/val;
    arcTan += elem;
    n++;

  } while(fabs(elem)>=delta);

  return arcTan;

}

//the function arctanh2 calculates the arctangent hyperbolic using the direct formula involving logarithmic function
double arctanh2(const double x){
  return (log(1+x) - log(1-x))/2;

}
