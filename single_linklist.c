#include <stdio.h>
#include <stdlib.h>

//create Node structure
typedef struct node{
	int data;
	struct node *next; //pointer to next node
}NODE;

NODE *head = NULL;
NODE *tail = NULL;

void Insert_Node(int data); 
void Print_List(void);

int main(){
	
	printf("Linklist First Program\n");
	//create_Node(1);
	Insert_Node(50);
	Insert_Node(10);
	Insert_Node(20);
	Insert_Node(26);
	Print_List();	
	return 0; 

}

void Insert_Node(int data)
{
	NODE *new_Node =(NODE *) malloc(sizeof(NODE));
	
	if (new_Node == NULL)//can't allocate memory
		printf("memory is not enough");	
	
	new_Node -> data = data;
	new_Node -> next = NULL; 

	if (head == NULL){//The linklist don't have any value if head is null
		head = new_Node;
		tail = new_Node;
	}else{
		tail -> next = new_Node;
		tail = new_Node;
	}	
}

void Print_List(void)
{
	printf("Show LinkList Content....\n");
	
	NODE *temp = head;

	while(temp != NULL){
		printf("%d -->  ", temp->data);
		temp = temp->next;
	}
	printf("NULL \n");

}
