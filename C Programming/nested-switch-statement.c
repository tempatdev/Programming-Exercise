
#include <stdio.h>
#include <stdlib.h>

/* Nested switch statements */

int main(int argc, char **argv)
{
int a=1;
char b='a';

switch(a)
{
        case 1:
                {
                        switch(b)
                        {
                                case 'a':
                                        {
                                                printf("The value is 1A \n");
                                                break;
                                        }

                                default:
                                        {
                                                printf("Out of #1 \n");
                                                break;
                                        }
                        }

                        break;
                }

        default:
                {
                        printf("Out of #2 \n");
                        break;
                }


}

return 0;
}
