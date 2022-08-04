# include<stdio.h>
# include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
int size = 3;
struct node* insertAtbegining(struct node* head){
	struct node *temp;
	int d;
	printf("Enter data : \n");
	scanf("%d",&d);
	temp = malloc(sizeof(struct node));
	temp->next = head;
	temp->data = d;
	size++;
	return temp;
}
struct node* insertAtEnd(struct node* head){
	int d;
	printf("Enter data : \n");
	scanf("%d",&d);
	struct node *newnode ;
	newnode = malloc(sizeof(struct node*));
	struct node * temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->data = d;
	newnode->next = NULL;
	size++;
	return head;
}
struct node* insertAtKthIndex(struct node* head,int k){
	int d;
	if(k==0){
	head =	insertAtbegining(head);
	}
	if(k==size){
		head = insertAtEnd(head);
	}
	struct node* temp = head;
	
	while(k-2>0){
		temp = temp->next;
		k--;
	}
	int d;
	struct node* newnode = malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&d);
	newnode->data = d;
	newnode->next = temp->next;
	temp->next = newnode;
	return head;
	
}
void traversal(struct node* head){
	struct node* temp= head;
	while(temp!=NULL){
		printf("%d ->",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main(){
	struct node* head;
	struct node* first = malloc(sizeof(struct node*));
	struct node* second = malloc(sizeof(struct node*));
	struct node* third = malloc(sizeof(struct node*));
	// insert elements.
	first->data = 10;
	second->data = 20;
	third->data = 30;
	first->next = second;
	second->next = third;
	third->next = NULL;
	head = first;
	
	traversal(head);
	head = insertAtEnd(head);
	traversal(head);
	head = insertAtbegining(head);
	traversal(head);
	
}
