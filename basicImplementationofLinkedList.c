# include<stdio.h>
# include<stdlib.h>
// making a structure of node.

struct node
{
  int data;
  struct node *next;
};
// program to understand basic functionality of linked list.

int main(){
	// it contains address of first node.
	struct node* head ;
	struct node* first;
	struct node* second;
	struct node* third;
	struct node* fourth;
	// we have 4 node and one head pointer;
	
	// Allocate memory for all 4 node.
	
	first = malloc(sizeof(struct node));
	second = malloc(sizeof(struct node));
	third = malloc(sizeof(struct node));
	fourth = malloc(sizeof(struct node));
	
	// start inserting data.
	
	first->data = 10;
	second->data  = 20;
	third->data = 40;
	fourth->data = 50;
	
	// linking nodes with each other.
	
	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = NULL;
	head= first;
	
	// Start traversing in the linked list and print the present data.
	struct node *temp = head;
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
	
	
}
