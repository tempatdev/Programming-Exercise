#include <stdio.h>
#include <stdlib.h>

/* Global Variable and Formal Parameter */

//global variable
int globalvar;

//function f1
int f1(int fa, int fb, int fc);


int main(int argc, char **argv)
{

//local variables
int a=1,b=2,c=3;

globalvar = a+b+c;

printf("Value: %d \n", globalvar);  //printing value of local variables
printf("Value from function f1: %d \n", f1(a,b,c));   //printing value of f1 function

return 0;

}

//function f1 init
int f1(int fa,int fb,int fc)
{
        //accessing global variable
        globalvar = fa + fb * fc + 1;
        return globalvar;
}


