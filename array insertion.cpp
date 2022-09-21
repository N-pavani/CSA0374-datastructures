#include<stdio.h>
int main()
{
	int position,c,n,value,array[50];
	printf("entre the number if value in an array");
	scanf("%d",&n);
	printf("enter the value of %d\n",n);
	for(c=0;c<n;c++)
	scanf("%d",&array[c]);
	printf("enter the location");
	scanf("%d",&position);
	printf("enter the value");
	scanf("%d",&value);
	for(c=n-1;c>=position-1;c--)
	array[c+1]=array[c];
	array[position-1]=value;
	printf("resultant array is");
	for(c=0;c<=n;c++)
	printf("%d\n",array[c]);
	return 0;
}
