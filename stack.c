#include <stdio.h>
#include <stdlib.h>

typedef struct nd{
	int data;
	struct nd *next;

}Node;

Node *top = NULL;

void push(int data);
void pop();
int is_Empty();
void stack_top();
void list();

int main()
{

	push(1);
	push(2);
	push(10);
	push(100);
	list();
	stack_top();
	pop();
	pop();
	push(50);
	list();

	return 0;
		
}

void push(int data)
{
	Node *new_node =(Node *)malloc(sizeof(Node)); 
	if(new_node == NULL){
		printf("memory is not enough");
		exit(1);
	}
	new_node -> data = data;
	new_node -> next = top;
	top = new_node; 
	
}

void pop()
{
	Node *temp;
	if(!is_Empty()){
		temp = top;
		top = top ->next;
		free(temp);

	}
	else
		printf("This stack is empty");
}

int is_Empty()
{
	if(top == NULL)
		return 1;
	else
		return 0;
}

void stack_top()
{
	printf("stack top is %d\n", top->data);
}

void list()
{
	Node *temp;
	temp = top;
	while(temp != NULL){
		printf("%d --> ", temp->data);
		temp = temp -> next;
	}		
	printf("\n");
}
