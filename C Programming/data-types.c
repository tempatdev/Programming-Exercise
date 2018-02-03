#include <stdlib.h>
#include <stdio.h>

/* Data types */

int main(int argc, char ** argv)
{

char charsample;
unsigned char ucharsample;
signed char scharsample;
int intsample;
unsigned int uintsample;
short int shortsample;
unsigned short int ushortsample;
long int lisample;
unsigned long int ulisample;
float floatsample;
double doublesample;



printf("Size of data type char is %d byte\n", sizeof(charsample));
printf("Size of data type unsigned char is %d byte\n", sizeof(ucharsample));
printf("Size of data type signed char is %d byte\n", sizeof(scharsample));
printf("Size of data type int is %d bytes\n", sizeof(intsample));
printf("Size of data type unsigned int is %d bytes\n", sizeof(uintsample));
printf("Size of data type short int is %d bytes\n", sizeof(shortsample));
printf("Size of data type unsigned short int is %d bytes\n", sizeof(ushortsample));
printf("Size of data type long int is %d bytes\n", sizeof(lisample));
printf("Size of data type unsigned long int is %d bytes\n", sizeof(ulisample));
printf("Size of data type float is %d bytes\n", sizeof(floatsample));
printf("Size of data type double is %d bytes\n", sizeof(doublesample));


return 0;

}
