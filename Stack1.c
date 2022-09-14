#include<stdio.h>
#define SIZE 5
struct Stack{
	int top;
	int data[SIZE];
}s;
main()
{
	s.top=0;
	int ch;
	while(1)
	{
		printf("1: Push\n");
		printf("2: Pop\n");
		printf("3: Peep\n");
		printf("4: Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: Peep();
					break;
			case 4: exit(0);
					break;
			default: printf("Invalid Choice\n");
		}
	}
}
void Push()
{
	int a;
	if(top>=SIZE-1)
		printf("Stack Overflow\n");
	else
	{
		scanf("%d",&a);
		top+=1;
		data[top]=a;
	}
}
int Pop()
{
	if(top==-1)
		return 0;
	else
	{
		return data[top];
		top-=1;
	}
}
void Peep()
{
	if(top==-1)
		printf("Stack Underflow")
	else{
		printf("%d\n",data[top]);
	}
}