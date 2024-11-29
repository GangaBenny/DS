#include <stdio.h>
#include <stdlib.h>

struct Node {
int data; 
struct Node* link; 
};

struct Node* start = NULL;

struct Node* getnode() {
int item;
printf("Enter the value to enqueue: ");
scanf("%d", &item); 

struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
if (new_node == NULL) {
printf("Memory allocation failed!\n");
exit(0); 
}
new_node->data = item; 
new_node->link = NULL; 
return new_node; 
}

void enqueue() {
struct Node* new_node = getnode();
if (start == NULL) {

start = new_node;
} else {
struct Node* ptr = start; 



while (ptr->link != NULL) {
ptr = ptr->link;
}

ptr->link = new_node;
}
printf("%d is enqueued\n",new_node->data);
}

void dequeue() {
if (start == NULL) {
printf("queue is empty, nothing to delete.\n");
} else {
struct Node* ptr = start;
start = start->link;
printf("item is dequeued\n");
}
}


void traverse() {
if (start == NULL) {
printf("queue is empty.\n");
} else {
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
printf("1. enqueue\n");
printf("2. dequeue\n");
printf("3. Traverse\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {

case 1:
enqueue(); 
break;
case 2:
dequeue();
break;
case 3:
printf("queue elements are : ");
traverse(); 
break;
exit(0);
default:
printf("Invalid choice! Please choose a valid option.\n");
}
}
return 0;
}
