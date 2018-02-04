
#include <stdio.h>
#include <stdlib.h>

/* Multidimensional Array */


int main(int argc, char **argv)
{
int i,j;
int theArray[3][4] = {
        {3,1,6,2},
        {1,7,4,9},
        {2,7,3,0}
};

//looping for row
for(i=0;i<3;i++)
{
        //looping for column
        for(j=0;j<4;j++)
        {
                printf("Array[%d][%d]: %d\n",i,j,theArray[i][j]);
        }

}


return 0;
}
