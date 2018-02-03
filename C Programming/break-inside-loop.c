
#include <stdlib.h>
#include <stdio.h>

//Break inside the loop


int main(int argc, char **argv)
{
int i;

for(i=0;i<5;i++)
{
        printf("For loop #%d \n",i);
        if(i==3)
        {
                printf("Looping #3 reached. Break! \n");
                break;
        }

}


return 0;
}
