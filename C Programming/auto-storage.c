#include <stdlib.h>
#include <stdio.h>

int autostorage(int number)
{
auto int number2;
number2 +=  number;
return number2;
}


int main(int argc, char **argv)
{
printf("%d \n ", autostorage(1));


return 0;
}


