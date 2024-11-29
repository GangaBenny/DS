#include<stdio.h>
#include<stdlib.h>
#define max 50
int stack[max];
int top=-1;
void push()
{
int value;
if(top==max-1)
{
printf("stack overflow,can't push element\n");
}
else
{
printf("enter the element to be pushed: ");
scanf("%d",&value);
top++;
stack[top]=value;
printf("%d pushed into stack\n",value);
}
}
void pop()
{
if(top==-1)
{
printf("stack is underflow,no element available for pop\n");
}
else
{
printf("the element %d is popped\n",stack[top]);
top--;
}
}
void display()
{
int i;
if(top==-1)
{
printf("stack is empty\n");
}
else
{
printf("stack elements are:\n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
}
int main()
{
int ch;
while(1)
{
printf("\n\n STACK MENU\n\n");
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("Enter your choice: ");
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
	printf("invalid choice,try agrain");
}
}
return 0;
}
