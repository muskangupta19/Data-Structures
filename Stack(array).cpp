#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int A[15],top=-1;
static int n=0;
push()
{
	int item;
	printf("\nEnter item to be pushed in stack");
	scanf("%d",&item);
	if(top>=15)
	{
		printf("\nStack is full");
	}
	else
	{
		top=top+1;
		A[top]=item;
		n++;
	}
}
pop()
{
	int item;
	if(top<0)
	{
		printf("\nStack is empty");
	}
	else
	{
		item=A[top];
		A[top]=NULL;
		top=top-1;
		n--;
	}
}
traversal()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}
int main()
{
	int ch;
	A: printf("\n1. Push");
	   printf("\n2. Pop");
	   printf("\n3. Traversal");
	   printf("\n4. Exit");
	   printf("\nEnter your choice");
	   scanf("%d",&ch);
	   switch(ch)
	   {
	   	case 1: push();
	   	        goto A;
	   	case 2: pop();
	   	        goto A;
	   	case 3: traversal();
	   	        goto A;
	   	case 4: exit(0);
	   }
}
