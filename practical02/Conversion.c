#include <stdio.h>
#include <math.h>

int main(void) {

//we declare our variables 
int i,inum,tmp,numdigits;
float fnum;
char binnum[60];

//we intialise a 4-byte integer and then we convert it to 4-byte float
inum = 33554431;
fnum = (float) inum;

//we convert the decimal value of inum into its binary representation and then we store it as a string, using a while loop which repeat the divide 
i = 0; tmp = inum;
while (tmp > 0) {
  sprintf(&binnum[i],"%1d",tmp%2);
  tmp = tmp/2;
  i++;
}

//we add a null terminator at the end of the string in order to show the end of the binary representation
binnum[i] = '\0';
       

//we calculate and print the number of digits we have in base-2 representation
numdigits = ceil(logf(inum)/logf(2));  
printf("The number of digits is %d\n", numdigits);


//we print the original integer,and its float & binary representation
printf("inum=%d,  fnum=%f, inum in binary=%s\n",
inum,fnum,binnum);
  
return 0; 


}

