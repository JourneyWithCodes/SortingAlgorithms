#include<stdio.h>
void main()
{
    int arr[20],n,i,j, select;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n-1;i++)
    {
        select = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[select]>arr[j])
                select = j;
        }
        if(select != i)
        {
            int swap = arr[i];
            arr[i] = arr[select];
            arr[select] = swap;
        }
    }
    printf("After sorting: \n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
