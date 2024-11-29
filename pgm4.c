#include<stdio.h>
#define max 5
int queue[max];
int front=-1,rear=-1,count=0;
void enqueue()
{
int value;
if(count==max)
{
printf("circular queue is full,cannot enqueue  the element\n");
}
else
{
if(front==-1)
{
front=0;
}
printf("enter the element to be pushed: ");
scanf("%d",&value);
rear=(rear+1)%max;
queue[rear]=value;
count++;
printf("%d is added into circular queue\n",value);
}
}
void dequeue()
{
if(count==0)
{
printf("circular queue is empty\n");
}
else
{
printf("the element %d is deleted\n",queue[front]);
front=(front+1)%max;
count--;
}
}
void display()
{
int i,j=front;
if(count==0)
{
printf("circular queue is empty\n");
}
else
{
printf("circular queue elements are:\n");
for(i=0;i<count;i++)
{
printf("%d\n",queue[j]);
j=(j+1)%max;
}
printf("\n");
}
}
int main()
{
int ch;
while(1)
{
printf("\n\n CIRCULAR QUEUE OPERATIONS\n\n");
printf("1.enqueue\n");
printf("2.dequeue\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
       enqueue();
       break;
case 2:
	dequeue();
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
