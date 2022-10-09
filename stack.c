#include<stdio.h>
void push();
void pop();
int top = -1;
void display();
int stack[100];
int n;
int main()
{
	printf("enter the size of the stack :-");
	scanf("%d", &n);
	int choice,flag = 0;
	while(1==1)
	{
		printf("*********MENU********\n");
		printf("enter 1 to push\n");
		printf("enter 2 to pop\n");
		printf("enter 3 to display\n");
		printf("enter 4 to exit\n");
		scanf("%d",&choice);
		switch(choice)
	{
		case 1: push();break;
		case 2: pop();break;
		case 3: display();break;
		case 4: flag = 1;break;
		default: printf("invalid choice\n");break;
		
	}
	if (flag == 1)
	break;
	}
	return 0;
}

void push()
{
	if(top == n-1)
	{
		printf("stack overflow\n");
	}
	else
	{
		printf("enter the number you want to push\n");
		scanf("%d",&stack[++top]);
	} 
}

void pop()
{
	if(top == -1)
	{
		printf("the stack is empty\n");
	}
	else
	{
		printf("popped element is:-%d\n",stack[top]);
		
		top--;
	}
}

void display()
{
	printf("elements in the stack are:-");
	
	for(int i = top; i>=0; i--)
	{
		printf("%d\n",stack[i]);
	}
}
