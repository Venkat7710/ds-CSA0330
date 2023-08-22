#include<stdio.h>
void quicksort(int num[30],int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
	   pivot=first;
	   i=first;
	   j=last;
	   while(i<j)
	   {
		   while(num[i]<=num[pivot]&&i<last);
		   i++;
		   while(num[j]>num[pivot]);
		   j--;
		   if(i<j)
		   {
			  temp=num[i];
			  num[i]=num[j];
			  num[j]=temp;
		   }
	   }
	temp=num[pivot];
	num[pivot]=num[j];
	num[j]=temp;
	quicksort(num,first,j-1);
	quicksort(num,j+1,last);
    }
}
int main()
{
	int i,c,num[30];
	printf("enter the number count:");
	scanf("%d",&c);
	printf("enter the %d values:",c);
	for(i=0;i<c;i++)
	scanf("%d",&num[i]);
	quicksort(num,0,c-1);
	printf("after quicksorting:");
	for(i=0;i<c;i++)
	printf("%d",num[i]);
	return 0;
}
