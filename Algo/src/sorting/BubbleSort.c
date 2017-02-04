
#include"../util/util.h"

void bubbleSort(int *arr,int size)
{
        for(int i=0;i<size;i++)
        {
                for(int j=0;j<size-i-1;j++)
                {
                        if(arr[j]>arr[j+1])
                        {
                                swap(&arr[j],&arr[j+1]);
                        }
                }
        }
}

/*int main()
{
        int arr[]={10,7,4,3,6,8,5,9,2,1};
        int size= sizeof(arr)/sizeof(arr[0]);
        print(arr,size);
        bubbleSort(arr,size);
        print(arr,size);
        return 0;
}*/
