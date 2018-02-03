
#include <stdio.h>
#include <stdlib.h>

/* Logical Operators */


int main(int argc, char **argv)
{
int a=1,b=2;

// and "&&" logical operator
if(a==1 && b==2)
{
        printf("Logical \"&&\" result is True\n");
}

// or "||" logical operator
if(a==1 || b==0)
{
        printf("Logical \"||\" result is True\n");
}

// not "!" logical operator
if(!(a==2))
{
        printf("Logical \"!\" result is True\n");
}

return 0;
}
