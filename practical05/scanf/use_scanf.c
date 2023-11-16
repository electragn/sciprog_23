#include <stdio.h> 

int main(void) {
  //we declare two integers (where the ierr is the error parameter) and a double variable
  int i, ierr;
  double a;

  //we ask from the user to enter an integer and a double variable 
  printf("Enter an int and double\n");
  //it reads the input from the user (%d,%lf),the number of scanned items is stored in the variable ierr
  ierr=scanf("%d %lf",&i,&a); 

  //we do error checking, and if there was an issue with the input it prints the error message 
  if(ierr!=2) printf("Problem with input");

  return 0;

}

       
