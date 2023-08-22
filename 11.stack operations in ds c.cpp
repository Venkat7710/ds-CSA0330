#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
struct stack
{
	int stk[MAXSIZE];
	int top;
};
typedef struct stack ST;
ST s;
void push()
{
	int num;
	if(s.top == (MAXSIZE - 1))
	{
		printf("stack is full:");
		return;
	}
	else
	{
		printf("enter the elements to be pushed:");
		scanf("%d",&num);
		s.top=s.top+1;
		s.stk[s.top]=num;
	}
	return;
}
int pop()
{
	int num;
	if(s.top == -1)
	{
		printf("stack is empty");
		return(s.top);
	}
	else
	{
		num=s.stk[s.top];
		printf("popped element is=%d\n",s.stk[s.top]);
		s.top =s.top-1;
	}
	return(num);
}
void display()
{
	int i;
	if(s.top == -1)
	{
		printf("stack is empty:\n");
		return;
	}
	else
	{
		printf("status of elements in stack:\n");
		for(i=s.top;i>=0;i--)
		{
			printf("%d\n",s.stk[i]);
		}
	}
}
int main()
{
	int ch;
	s.top = -1;
	printf("\nstack operations\n:");
	printf(" 1.push\n");
	printf(" 2.pop\n");
	printf(" 3.display");
	printf(" exit");
	while(1)
	{
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
				case 2:
					pop();
					break;
					case 3:
					    display();
					    break;
					    case 4:
						    exit(0);
						    default:	
							    printf("invalid operation");
		}
	}
	return 0;
}
