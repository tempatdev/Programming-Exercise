#include <stdlib.h>
#include <stdio.h>

//Function Declaration
int add(int a,int b);


int main(int argc, char ** argv)
{
//Variable definition
int c = 2,  d = 1;

//Function call and print
printf("Result is %d \n", add(c,d));

return 0;

}

int add(int a, int b)
{
int result;
result = a + b;

return result;
}

