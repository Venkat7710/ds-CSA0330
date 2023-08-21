#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of elements in array:");
	{
		scanf("%d",n);
	}
	int arr[n];
	printf("enter %d elements:",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("even numbers in the array are:");
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		printf("%d",arr[i]);
	}
	printf("odd numbers in the array are:");
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==1)
		printf("%d",arr[i]);
	}
	return 0;
}
