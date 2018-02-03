#include <stdlib.h>
#include <stdio.h>

/* Define and Constant */

#define phi 3.14


int main(int argc, char **argv)
{
const float phi2 = 3.14;
int r=10;

printf("Circle result with Define Preprocessor is %.2f \n",phi*r*r);
printf("Circle result with Const Variable is %.2f \n", phi2*r*r);




return 0;
}
