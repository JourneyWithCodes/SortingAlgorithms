#include<stdio.h>
void main()
{
    int arr[20],n,i,j,hold;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[i]>arr[j])
            {
                hold = arr[i];
                arr[i] = arr[j];
                arr[j] = hold;
            }
        }
    }
    printf("After sorting: \n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
