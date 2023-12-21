#include "array_utils.h"
#include<stdlib.h>

int contains(const int *arr , int size ,int x)
{
    for(int i = 0; i<size; i++)

    {
        if(arr[i]==x)
        {
            return 1;
        }
    }
    return 0;
}

int containsWithin(const int *arr , int size , int x , int i , int j)
{
    for(int k = 1; k<=j; k++)
    {
        if(k>=0 && k<size && arr[k] ==x)
        {
              return 1;
        }
        
    }
    return 0;
}

int *paddedCopy(const int *arr , int oldSize , int newsize)
{
    int *newArr = (int *)malloc(sizeof(int )* newsize);
    if(!newArr)
    {
        return NULL;
    }

    int minSize = (oldSize < newsize) ? oldSize : newsize;
    for(int i = 0 ; i<minSize ;i++)
    {
        newArr[i] = arr[i];
    }
    return newArr;

//place your function definitions here
}

void reverse(int *arr , int size)
{
    for(int i = 0 ; i<size/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size - 1 -i] = temp;
    }
}

int *reverseCopy(const int *arr , int size)
{
    int *newArr = (int * )malloc (sizeof(int) * size);

    if(!newArr)
    {
        return NULL;
    }

    for(int i = 0;i<size ; i++)
    {
        newArr = arr[size -1 - i];

    }
    return newArr;

}



