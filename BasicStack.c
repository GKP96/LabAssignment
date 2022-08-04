# include<stdio.h>

// Write a program to implement Stack and it's basic operation.

int n = 10;
int top = -1;
// Push function.
void push(int arr[],int top,int x){
	if(top<n-1){
		top++;
		arr[top] = x;
	}
	else{
		printf("OVERFLOW\n");
	}
}
void display(int arr[],int top){
	if(top == -1){
		printf("STACK IS EMPTY\n");
	}
	else{
		for(int i = 0;i<=top;i++)
		printf("%d ",arr[i]);
	}
}
void peek(int arr[]){
  printf("%d\n",arr[i]);
}
int main(){
	int s[n];
//	int top = -1;
	push(s,top,10);
	display(s,top);
	printf("%d",top);
	
}
