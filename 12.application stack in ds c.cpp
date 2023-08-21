#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int top=-1,inp_arr[SIZE];
void push();
void pop();
void show();
int main()
{
	int choice;
	while(1)
	{
		printf("\noperations of stack\n");
		printf("\n1.push the element\n2.pop\n3.show\n4.exit\n");
		printf("enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
				case 2:
					pop();
					break;
					case 3:
						show();
						break;
						case 4:
							exit(0);
							default:
								printf("\ninvalid operation");
		}
	}
	return 0;
}
void push()
{
	int x;
	if(top==SIZE-1)
	{
		printf("\nover flow!!");
	}
	else
	{
		printf("\nenter the elements to the  stack:");
		scanf("%d",&x);
		top=top+1;
		inp_arr[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nunder flow!!");
	}
	else
	{
		printf("popped elements:%d",inp_arr[top]);
		top=top-1;
	}
}
void show()
{
	if(top==-1)
	{
		printf("\nunder flow!!");
	}
	else
	{
		printf("\nelements present in the stack:\n");
		for(int i=top;i>=0;--i)
		    printf("%d\n",inp_arr[i]);
	}
}
