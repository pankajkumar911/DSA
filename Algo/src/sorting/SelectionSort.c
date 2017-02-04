#include "../util/util.h"

void selectionSort(int *arr, int size)
{
        int keyMin;
        for(int i=0;i<size;i++)
        {
                keyMin = arr[i];
                int k=i;
                for(int j=i+1; j<size ; j++)
                {
                        if(keyMin>arr[j])
                        {
                                keyMin=arr[j];
                                k=j;
                        }
                }
                if(k!=i)
                {
                        swap(&arr[i],&arr[k]);
                }
        }
}

/*int main(){
        int arr[] = {10,8,2,6,4,1,3,7,9,5};
        int size = sizeof(arr)/sizeof(arr[0]);
        print2DArray(arr,size);
        selectionSort(arr,size);
        print2DArray(arr,size);
        return 0;
}*/
