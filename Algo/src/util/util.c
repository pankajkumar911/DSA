#include<stdio.h>
#include"util.h"

void print2DArray(int *arr,int size)
{
        for(int i=0;i<size;i++)
        {
                printf("%d ",arr[i]);
        }
        printf("\n");
}

void swap(int *a, int *b)
{
        *a=*a^*b;
        *b=*a^*b;
        *a=*a^*b;
}
