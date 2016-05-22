#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
	
}nd; 

void enqueue(int data);
void dequeue(void);
int IsEmpty(void);
void printlist(void);


nd *front = NULL;
nd *rear = NULL;

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(5);
	enqueue(100);
	printlist();	
	dequeue();
	dequeue();
	printlist();
	enqueue(50);
	enqueue(43);
	printlist();
	dequeue();
	dequeue();
	printlist();
	return 0;
}

void enqueue(int data)
{
	nd *new_node = (nd *)malloc(sizeof(nd));
	new_node -> data = data;	
	new_node -> next = NULL;	
	if(front == NULL){
		front = new_node;
		rear = new_node;
	}
	else{
		rear -> next = new_node;
		rear  = new_node;	
	}
}

void dequeue()
{
	if(!IsEmpty()){
		nd *temp = front;
		front = front -> next;					
		free(temp);
	}
}

int IsEmpty(void)
{
	if(front == NULL)
		return 1;
	else
		return 0;

}
void printlist(void)
{
	nd *temp = front;
	
	while(temp != NULL){
		printf("%d --> ", temp -> data);
		temp = temp -> next;
	}
	printf("NULL\n");
}

