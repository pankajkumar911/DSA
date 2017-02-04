#include"../util/util.h"

void insertionSort(int *,int);

/*int main(){
        int arr[]={10,1,8,6,5,9,2,4,3,7};
        int size = sizeof(arr)/sizeof(arr[0]);
        printArray(arr,size);
        insertionSort(arr,size);
        printArray(arr,size);
}*/

void insertionSort(int *arr,int size)
{
        int key;
        for(int j=1;j<size;j++)
        {
                key=arr[j];
                int i=j-1;
                while(i>=0 && arr[i]>key)
                {
                        arr[i+1]=arr[i];
                        i--;
                }
                arr[i+1]=key;

        }
        return;
}
