#include<stdio.h>

int main(){
  
  //declare the dimensions of the matrices
  int n=5, p=3, q=4;
  double A[n][p], B[p][q], C[n][q];
  //declare the loop indices 
  int i, j, k;

  //initialise A,B (with values i+j & i-j) and C (with zeros) 
  for (i=0; i<n; i++){
    for(j=0; j<p; j++){
      A[i][j]=i+j;
    }  
  }

  for (i=0; i<p; i++){
    for(j=0; j<q; j++){
      B[i][j]=i-j;
    }
  }

  for (i=0; i<n; i++){
    for(j=0; j<q; j++){
      C[i][j]=0.0;
    }
  }


  //perform matrix multiplication
  for(i=0; i<n; i++){
    for(j=0; j<q; j++){
      for(k=0; k<p; k++){
        C[i][j]=C[i][j]+A[i][k]*B[k][j];
      }
    }
  }


  //print out the matrices A,B and C
  printf("\nThis is matrix A:\n");
  for(i=0; i<n; i++){
    for(j=0; j<p; j++){
      printf("%3.0f" , A[i][j]);
    }
    printf("\n");  
  }   
  

  printf("\nThis is matrix B:\n");
  for(i=0; i<p; i++){
    for(j=0; j<q; j++){
      printf("%3.0f" , B[i][j]);
    }
    printf("\n");
  }

  printf("\nThis is matrix C:\n");
  for(i=0; i<n; i++){
    for(j=0; j<q; j++){
      printf("%3.0f" , C[i][j]);
    }
    printf("\n");
  }
 return 0;

}
