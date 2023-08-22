#include<stdio.h>
void merge(int arr[],int min,int mid,int max)
{
	int temp[30];
	int i,j,k,m;
	j=min;
	m=mid+1;
	for(i=min;j<=mid && m<=max;i++)
	{
		if(arr[j]<=arr[m])
		{
			temp[i]=arr[j];
			j++;
		}
		else
		{
			temp[i]=arr[m];
			m++;
		}
	}
	if(j>mid)
	{
		for(k=m;k<=max;k++)
		{
			temp[i]=arr[k];
			i++;
		}
		for(k=j;k<=mid;k++)
		{
			temp[i]=arr[k];
			i++;
		}
	}
	for(k=min;k<=max;k++)
	arr[k]=temp[k];
}
void sortm(int arr[],int min,int max)
{
	int mid;
	if(min<max)
	{
		mid=(min+max)/2;
		sortm(arr,min,mid);
		sortm(arr,mid+1,max);
		merge(arr,min,mid,max);
	}
}
int main()
{
	int arr[30];
	int i,size;
	printf("enter the elements size:");
	scanf("%d",&size);
	printf("enter the %d numbers:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	sortm(arr,0,size-1);
	printf("after merge sorted:\n\n");
	for(i=0;i<size;i++)
	printf("%d",arr[i]);
	return 0;
}
