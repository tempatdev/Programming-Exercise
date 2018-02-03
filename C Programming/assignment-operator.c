#include <stdio.h>
#include <stdlib.h>

/* Simple assignment operator */

int main(int argc, char **argv)
{

int a,b,c;

//Simple assignment operator
a = 1;
b=2;
printf("a=1 and b=2 \n");
printf("Simple assignment operator a=%d \n",a);
//Add
printf("Add AND assignment operator b=b+a or b+=a, b value is %d\n",b+=a);

//Subtract
printf("Subtract AND assignment operator b=b-a or b-=a , b value is %d \n", b-=a);

//Multiply
printf("Multiply AND assignment operator b=b*a or b*=a, b value is %d \n", b*=a);

//Divide
printf("Divide AND assignment operator b = b/a or b/=a, b value is %d \n", b/=a);

//Modulus
printf("Modulus AND assignment operator b = b%a or b%=a, b value is %d \n", b%=a);

//Left shift
printf("Left shift AND assignment operator a <<=2 or a=a<< 2, a value is %d \n" , a<<=2);

//Right shift
printf("Right shift AND assignment operator a >>= 0 or a=a>>0, a value is %d \n", a>>=0);

//Bitwise and
printf("Bitwise AND assignment operator a&=2 or a=a&2, a value is %d \n", a&=2);

//Bitwise exclusive OR and assignment operator
printf("Bitwise exclusive OR and assignment operator a^=2 or a=a^2, a value is %d \n",a^=2);

//Bitwise inclusive OR and assignment operator
printf("Bitwise inclusive OR and assignment operator a|=2 or a=a|2, a value is %d \n",a|=2);

return 0;
}
