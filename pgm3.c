#include<stdio.h>
#define max 50
int queue[max];
int front=-1,rear=-1;
void enqueue()
{
int value;
if(rear==max-1)
{
printf("queue is full,cannot enqueue  the element\n");
}
else
{
if(front==-1)
{
front=0;
}
printf("enter the element to be pushed: ");
scanf("%d",&value);
rear=rear+1;
queue[rear]=value;
printf("%d is added into queue\n",value);
}
}
void dequeue()
{
if(front==-1 || front>rear)
{
printf("queue is empty\n");
}
else
{
printf("the element %d is deleted\n",queue[front]);
front=front+1;
}
}
void display()
{
int i;
if(front==-1 || front>rear)
{
printf("queue is empty\n");
}
else
{
printf("queue elements are:\n");
for(i=front;i<=rear;i++)
{
printf("%d\n",queue[i]);
}
}
}
int main()
{
int ch;
while(1)
{
printf("\n\n QUEUE OPERATIONS\n\n");
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
