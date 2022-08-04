# include<stdio.h>
void printRevArr(int arr[], int n){
	int i = n-1;
    for(i = n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}
void remLast(int arr[], int n){
    arr[n-1] = 0;
    int i = 0;
    for( i = 0;i<n;i++){
        if(arr[i]==0){

        }
        else{
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}
int main(){
    int arr[10];
    int i = 0;
    printf("The size of the arrays is %d\n",10);
    printf("Enter the elements of the arrays\n");
    for( i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Printing the array in reverse order\n");
    printRevArr(arr,10);
    printf("print the array after removing the last elements of the array\n");
    remLast(arr,10);

}

