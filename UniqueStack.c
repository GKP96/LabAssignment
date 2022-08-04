# include<stdio.h>
int top1 = -1;
int top2 = -1;
int  pop(int arr[],int top){
    if(top==-1)printf("EMPTY STACK ||UNDERFLOW error \n");
    int data = arr[top];
    printf("Poped element is %d\n",data);
    top--;
    return data;
}
void push(int arr[] ,int top,int n,int data){
// Original stack is arr1.
if(top==n-1)printf("Stack is FULL || OVERFLOW error\n");
top++;
arr[top] = data;
}
int main(){
    printf("Enter the size of Stack\n");
    int n ;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    while(1){
    printf("Press P to push element || Press p to pop element || Press e for exit \n"); 
    char sel ;
    scanf("%c",&sel);
    switch(sel){
        case P:
        int x;
        scanf("%d",&x);
        while(arr1[top1]>x)push(arr2,top2,n,pop(arr1,top1));
        push(arr1,top1,n,data);
        while(top2!= -1)push(arr1,top1,n,pop(arr2,top2));
        break;
        case p:
        printf("Poped elemnet is %d",pop(arr1,top1));
        break;
        case e:
        return 0;
        default:
        printf("You select wrong case please select right one\n");
        break;

    }

    }
    
}

