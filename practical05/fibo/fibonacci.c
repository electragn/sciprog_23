#include<stdio.h>
#include<stdlib.h>

//input arguments: Fn-1 and Fn-2
//on exit: Fn and Fn-1
void fibonacci(int *a, int *b); 


int main(){

  int n, i;
  int f0=0, f1=1;

  //ask from the user to enter a positive integer and read the input 
  printf("Enter a positive integer \n");
  scanf("%d", &n);

  //check if the entered number is less than 1, if so print an error message and then exit the program with the code 1 
  if(n<1){
    printf("The number is not positive.\n");
    exit(1);
  }

  //print the elements of the fibonacci sequence 
  printf("The fibonacci sequence is: \n");
  printf("%d, %d, ", f0, f1);


  //calculating fibonacci sequence from 2
  for(i=2; i<=n; i++){
    fibonacci(&f1, &f0);
    printf("%d. ", f1);
    
    if((i+1)%10 == 0) printf("\n"); 
  }


return 0;

}


//declare the function for the fibonacci series calculation that takes 2 integer pointers as parameters 
void fibonacci(int *a, int *b){
  int next;
  //*a=fn-1 *b=fn-2 next=fn
  next=*a+*b;
  //*a=fn *b=fn-1
  *b=*a;
  *a=next;

}

