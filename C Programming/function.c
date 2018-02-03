
#include <stdlib.h>
#include <stdio.h>

/* function */

//for function call by value
int funcAdd(int a,int b)
{
        int c;
        c = a+b;
        return c;
}

//for function call by ref
void funcAddptr(int *aP, int *bP)
{
        int aaP=*aP,abP=*bP;
        printf("Function funcAddptr address  are %x and  %x same with a3 and b3 inside main. \n", aaP,abP);
}


//just another function
//Divide function declaration
int dividefunc(int divA, int divB);


int main(int argc, char **argv)
{

//function call by value
int a2=3,b2=5;
printf("Function add, call by value. The value is %d \n", funcAdd(a2,b2));
//end of function call by value


//function call by ref
int a3=11,b3=15;
printf("a3 address is %x, b3 address is %x \n",a3,b3);
funcAddptr(&a3,&b3);
//end of function call by ref

printf("Divide function result is %d \n", dividefunc(b3,a2));

return 0;
}

//Divide function returning value
int dividefunc(int divA, int divB)
{
        return divA/divB;
}

                                                                                                                                    51,0-1        Bot
