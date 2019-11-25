#include<stdio.h>
void main()
{
	int arr[20],hold,n;
	printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
            {
                hold = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = hold;
            }
    printf("After Sorting..\n");
    for(int i=0;i<n;i++)
    	printf("%d", arr[i]);
}
