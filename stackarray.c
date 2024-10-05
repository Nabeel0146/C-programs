#include <stdio.h>
#include <stdlib.h>
#define size 10
int stack[size];
int sp= -1;
void main()
{
	int opt, data;
	void push(int);
	int pop();
	void display();
	
	do
	{
		printf("1. Push \n");
		printf("2. Pop \n");
		printf("3. Display \n");
		printf("4. Exit\n");
		printf("Your Option:");
		scanf ("%d", &opt);
		
		switch (opt)
		{
			 case 1 : printf("Enter data: " "\n");
			 scanf("%d", &data);
			 push(data);
			 break;
			 
			 case 2 : data = pop();
			 printf("popped item %d \n", data);
			 break;
			 
			 case 3 : display();
			 break;
			 
			 case 4: exit(0);
		}
	}
	while(1);
}

void push(int data)
{
	if (sp==size-1)
		printf("Stack FULL \n" );
		
	else
		stack[++sp] = data;
}

int pop()
{
	if (sp==-1)
	{
		printf("Empty Stack \n");
		exit (1);
	}
	else
		return stack [sp--];
}

void display()
{
	int tsp=sp;
	printf("Stack contents : \n");
	while (tsp!=-1)
	{
		printf ("%d \n", stack[tsp] );
		tsp--;
	}
}
