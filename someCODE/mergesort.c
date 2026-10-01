#include <stdio.h>
#include <stdlib.h>
void merge (int* A,int l,int mid,int r,int* temp)
{   
    int i=l,j=mid+1,z=l;
    while (i<=mid&&j<=r)
    {   
        if(A[i]<=A[j])
        {
            temp[z++]=A[i++];
        }
        else
        {
            temp[z++]=A[j++];
        }
    }
    while (i<=mid)
    {
        temp[z++]=A[i++];
    }
    while (j<=r)
    {
        temp[z++]=A[j++];
    }
    for(int k =l;k<=r;k++)
    {
        A[k]=temp[k];
    }
    
}
void sort(int* A,int l,int r,int *temp)
{   
    if(l==r)
    {
        return;
    }
    int mid =(l+r)/2;
    sort(A,l,mid,temp);
    sort(A,mid+1,r,temp);
    merge(A,l,mid,r,temp);
}
int main()
{
    
    return 0;
}
