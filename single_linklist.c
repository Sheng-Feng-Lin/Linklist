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
int Insert_First_Node(int data);
int Insert_Mid_Node(int data); 
int Delete_Node(int data); 
int Length(NODE *temp);
void Print_List(void);

int main(){
	
	printf("Linklist First Program\n");
	//create_Node(1);
	Insert_Node(50);
	Insert_Node(10);
	Insert_Node(20);
	Insert_Node(26);
	
	Print_List();	
	
	Delete_Node(20);

	Print_List();

	Insert_First_Node(100);

	Print_List();
	
	Insert_Mid_Node(70);
	
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

int Insert_First_Node(int data)
{
	NODE *new_node = (NODE *)malloc(sizeof(NODE));
	if (new_node == NULL){
		printf("memory is not enough");
		return -1;
	}	
	new_node -> data = data;
	new_node -> next = head;
	head = new_node;
	return 1;
}

int Insert_Mid_Node(int data)// insert to 100 -> 50 -> 70 -> 10  .. 
{
	NODE *temp;
	NODE *new_node = (NODE *)malloc(sizeof(NODE));
	if (new_node == NULL){
		printf("memory is not enough");
		return -1;
	}
	temp = head;
	while(temp !=NULL){
		if (temp -> next -> data == 10 ){			
			new_node -> data = data;
			new_node -> next = temp -> next;
			temp -> next  = new_node;
			return 1;		
		}
		temp = temp -> next;
	}
	return 1;
}

int Delete_Node(int data)
{
	NODE *temp, *temp1;
	temp = head;
	while(temp != NULL){
		if(temp -> next -> data == data){
			temp1 = temp -> next;
			temp -> next = temp -> next -> next;
			printf("Delete data success = %d\n", data);
			
			free(temp1);

			return 1;
		}
		temp = temp->next;
	}	
	printf("Delete data fail\n");
	return -1;
}

int Length(NODE *temp)
{
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp -> next;
	}
	return count;
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

	printf("Show LinkList Length = %d\n", Length(head));

}


