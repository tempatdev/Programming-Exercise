#include <stdlib.h>
#include <stdio.h>

//Arithmetic Operators


int main(int argc, char **argv)
{
int a = 10, b =2 ;


printf(" Adds operator: a + b = %d \n", a+b);
printf(" Subtracts operator: a - b = %d \n", a-b);
printf(" Multiplies operator: a * b = %d \n", a*b);
printf(" Divides operator: a / b = %d \n", a/b);
printf(" Modulus operator: a % b = %d \n", a%b);
printf("______________________\n");

//increment operator in for loop
for(b=0;b<2;b++)
{       
        printf("Increament value is %d\n", b);
}
printf("__________________\n");

//decrement operator in for loop
for(b=2;b>0;b--)
{
printf("Decrement value is %d \n", b);
}



return 0;
}
