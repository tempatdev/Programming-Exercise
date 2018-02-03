#include <stdlib.h>
#include <stdio.h>


//Variable declaration
extern int a;
extern float b,c;

int main(int argc, char ** argv)
{

//Variable definition
int a;
float b,c;

//Variable initialization
a = 1;
b = 0.1;
c = a + b;

printf("Sum of a and b is %.2f \n" ,c); 



return 0;

}
