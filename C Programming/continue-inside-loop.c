
#include <stdlib.h>
#include <stdio.h>

//Continue inside the loop


int main(int argc, char **argv)
{
int i;

for(i=0;i<5;i++)
{
        if(i==3)
        {
                printf("Looping #3 reached. Skipped and Continue to next. \n");
                continue;
        }
        printf("For loop #%d \n",i);


}


return 0;
}


