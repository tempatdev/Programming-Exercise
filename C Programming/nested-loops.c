
#include <stdio.h>
#include <stdlib.h>


/* Nested loops */

int main(int argc, int **argv)
{
int a,b=1,c=1,i;


//While loop
while(b<3)
{

        //Do While loop
        do
        {
                //For loop
                for(i=0;i<5;i++)
                {
                        printf("For looping #%d \n",i);
                }

                printf("Do While loop #%d \n", c);
                c++;
                
        }while(c<2);

        printf("While loop #%d \n",b);
        b++;

        
}





return 0;       
}
