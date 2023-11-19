#include<stdio.h>

//declares the gcd_iteration function which calculates GCD using iteration
int gcd_iteration(int a,int b){

  int temp;
  while (b!=0){
    temp=b;
    b=a%b;
    a=temp;
  }
  return;

}

//declares the gcd_recursive function which calculates GCD using recursion
int gcd_recursive(int a, int b){
  if (b==0){
    return a;
  }
  else {
    return gcd_recursive(b,a%b);
  }

}

//declares the integers a & b, ask from user to enter positive values for the 2 integers and then do an error checking
int main(){
  int a;
  int b;
  printf("Please enter a positive integer a:\n");
  scanf("%d",&a);
  if (a<=0){
    printf("Thins number is not positive, aborting\n");
    return 1;
  }

  printf("Please enter a positive integer b:\n");
  scanf("%d",&b);  
  if (b<=0){
    printf("Thins number is not positive, aborting\n");
    return 1;
  }

//calculates GCD by calling the two functions
  int ans_r=gcd_recursive(a,b);
  int ans_i=gcd_iteration(a,b);
  printf("Using iteration, we get the answer: %d\n", ans_i);
  printf("Using recursion, we get the answer: %d\n", ans_r);
  return 0;

}
