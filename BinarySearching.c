# include<stdio.h>
int binarySearching(int arr[],int n,int x){
    int left = 0;
    int right = n-1;
    int no_of_comparisions = 0;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid] == x){
            printf("No of comarisons is %d\n",no_of_comparisions);
            printf("Found\n");
           return mid+1;
        }
        else if(arr[mid]>x){
            right = mid -1;
            no_of_comparisions++;
        }
        else if(arr[mid]<x){
            left = mid+1;
            no_of_comparisions++;
        }
    }
    printf("NO of comparisons is %d\n",no_of_comparisions);
    printf("NOT FOUND\n");
    return -1;

}
int linearSearch(int arr[],int n,int x){
    for(int i = 0;i<n;i++){

        if(arr[i] ==x){
            printf("No of comparisons is %d\n",i);
            printf("FOUND\n");
            return i+1;
        }
       
       
    }
     printf("NO of comparisons is %\n",n);
     printf("NOT FOUND\n");
 return -1;
}
int main(){
	printf("Enter the size of the array\n");
    int n ;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the element whose index to be find\n");
    scanf("%d",&x);
    printf("BINARY SEARCHING\n");
   int a=  binarySearching(arr,n,x);
   printf("%d\n",a);
   printf("See the difference between binary search and linear search\n");
  printf("LINEAR SEARCH\n");
   int b = linearSearch(arr,n,x);
   printf("%d\n",b);
}
