//find e using Taylor Series expansion for e^x

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//declare the factorial function  
int factorial(int n);

int main(){

  //define the variables
  int i, order;
  double e, *terms;

  //ask from user to enter the order of the polynomial 
  printf("Enter the required polynomial order\n");
  //read the input and do error checking  
  if(scanf("%d" ,&order) !=1){
    printf("Didn't enter a number\n");
    return 1;
  }

  //allocate space depending on the entered order of the polynomial
  terms = malloc(order*sizeof(double));
  //the loop calculates and prints each term of the polynomial 
  for (i=0; i<order; i++){
    terms[i]=1.0/(double)factorial (i+1);
    printf("e term for order %d is %1.14lf \n", i+1, terms[i]);
  }
  
  //this loop calculates the approximation of e
  e=1.0;
  for(i=0; i<order; i++){
    e=e+terms[i];
  }
  
  free(terms);
 
  //print the difference between the estimated and the actual value of e 
  printf("e is estimated as %.10lf, with difference %e\n", e, e-exp(1.0));
  
  
  return 0;

}

//calls the factorial function which calculate the factorial of a given value, and then does an error checking if the input is negative
int factorial(int n){
 if(n<0){
    printf("Error: Negative number passed to factorial.\n");
    return(-1);
  }
  else if(n==0){return 1;}
  else{return(n*factorial(n-1));}
}

