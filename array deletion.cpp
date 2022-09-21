#include<stdio.h>
int main()
{
	int arr[50];
	int pos,i,num;
	printf("\nEnter the number of element is an array:\n");
	scanf("%d",&num);
	printf("\n Enter %d element in array:\n",num);
	for(i=0;i<num;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("Define the position of the array element where you want to delete:\n");
	scanf("%d",&pos);
	if(pos>=num+1)
	{
		printf("\n Delection is not possible in the array.");
    }
    else
    {
    	for(i=pos-1;i<num-1;i++)
    	{
    		arr[i]=arr[i+1];
		}
    }
    printf("\n the resultant array is: \n");
    for(i=0;i<num-1;i++)
	{
		printf("arr[%d]=",i);
		printf("%d\n",arr[i]);
	}
    return 0;
}
