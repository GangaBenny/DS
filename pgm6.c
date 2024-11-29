#include <stdio.h>
#include <stdlib.h>

struct Node 
{
int data; 
struct Node* link; 
};

struct Node* start = NULL;

struct Node* getnode() 
{
int item;
printf("Enter the value for pushing: ");
scanf("%d", &item); 

struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
if (new_node == NULL) 
{
printf("Memory allocation failed!\n");
exit(0); 
}
new_node->data = item; 
new_node->link = NULL; 
return new_node; 
}

void push() {
struct Node* new_node = getnode(); 
if (start == NULL) {

start = new_node;
} 
else 
{

new_node->link = start;

start = new_node;
}
printf("%d is pushed\n",new_node->data);
}


void pop()
{
if (start == NULL) 
{
printf("stack is empty, nothing to delete.\n");
} 
else 
{
struct Node* ptr = start;
start = start->link;
printf("element popped successfully.\n");
}
}


void traverse() 
{
if (start == NULL) 
{
printf("stack is empty.\n");
} 
else 
{
struct Node* ptr = start;
while (ptr != NULL) {
printf("-> %d", ptr->data); 
ptr = ptr->link;

}
}
}

int main() {
int choice;
while (1) {

printf("\n--- Menu ---\n");
printf("1. push\n");
printf("2. pop\n");
printf("5. Traverse List\n");
printf("6. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
push(); 
break;
case 2:
pop();
break;
case 3:
printf("stack elements are : ");
traverse(); 
break;
exit(0);
default:
printf("Invalid choice! Please choose a valid option.\n");
}
}
return 0;
}
