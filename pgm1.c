#include<stdio.h>
#include<stdlib.h>
int a[10],j,n,k,item;
void create()
{
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter the elements of the array: ");
for(j=1;j<=n;j++)
{
scanf("%d",&a[j]);
}
}

void insert()
{
printf("Enter the element to be inserted: ");
scanf("%d",&item);
printf("Enter the position to be inserted: ");
scanf("%d",&k);
n=n+1;
for(j=n;j>=k;j--)
{
a[j+1] = a[j];
}
a[k]=item;
}
void delete()
{
printf("Enter the position of element to be deleted: ");
scanf("%d",&k);
item = a[k];
for(j=k;j<n;j++)
{
a[j] = a[j+1];
}
n=n-1;
printf("Deleted element is: %d\n",item);
}
void display()
{
printf("New array is: ");
for(j=1;j<=n;j++)
{
printf("%d ",a[j]);
}
}

int main()
{
int ch;
while(1)
{
printf("\n\n ARRAY OPERATIONS MENU\n\n");
printf("1.create\n");
printf("2.insertion\n");
printf("3.deletion\n");
printf("4.display\n");
printf("5.Exit\n");
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
        create();
        break;
case 2:
	insert();
	break;
case 3:
	delete();
	break;
case 4:
	display();
	break;
case 5:
	exit(0);
default:
	printf("invalid choice,try agrain");
}
}
return 0;
}
