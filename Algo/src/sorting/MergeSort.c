#include<stdio.h>

#include"../util/util.h"


void merge(int *arr,int a,int b, int c)
{
        int i=a;
        int j=b+1;
        int k=0;

        int tmp[c-a+1];
		while(i<=b && j<=c )
		{
			if(arr[i] < arr[j])
			{
				tmp[k++] = arr [i++];
			}
			else
			{
				tmp[k++] = arr [j++];
			}
		}
		while (i<=b)
		{
			tmp[k++] = arr [i++];
		}
		while (j<=c)
		{
			tmp[k++] = arr [j++];
		}

        for(int i=0;i<=c-a;i++)
        {
                arr[a+i]=tmp[i];
			#ifdef DEBUG
                printf("%d ",tmp[i]);
			#endif
        }
	#ifdef DEBUG
        printf("\n");
	#endif

}


void mergeSort(int *arr,int p,int q)
{
        if(p==q)
        {
                return;
        }
        int m=(p+q)/2;

        mergeSort(arr,p,m);
        mergeSort(arr,m+1,q);
        merge(arr,p,m,q);
}


/*int main()
{
        int arr[]={10,7,5,3,9,6,8,2,4,1};

        //int arr[]={1,3,2,4};
        int size=sizeof(arr)/sizeof(arr[0]);
        print2DArray(arr,size);

//        merge(arr,0,1,3);

        mergeSort(arr,0,size-1);

        print2DArray(arr,size);

        return 0;
}*/
