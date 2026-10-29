#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 3, 4, 5};
    int flag_same = 1;

    for(i=0; i<SIZE; i++)
    {
        if(a[i] != b[i])
        {
            flag_same = 0;
        }
            //printf("index %i different!\n", i);
    }   

    if(flag_same == 1)
        printf("same!\n");
    else
        printf("different!\n");

    return 0;
}