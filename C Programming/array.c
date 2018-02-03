
#include <stdio.h>
#include <stdlib.h>

/* Array */


int main(int argc, char **argv)
{
        
int i;
char alph[] = {'A','B','C','D'};
int numbs[] = {1,2,3,4,5};

printf("Chars list:\n");

//looping for char array
for(i=0;i<4;i++)
{
printf("- %c \n",alph[i]);
}

printf("Numbers list:\n");

//looping for number array
for(i=0;i<4;i++)
{
printf("- %d \n",numbs[i]);
}


return 0;
}
