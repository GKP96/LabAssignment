# include<stdio.h> 
// Merge function.
void merge(int arr[],int low,int high){
    int mid = low+(high-low)/2;
    int len1 = mid-low+1;
    int len2 = high -mid;
    int arr1[len1];
    int arr2[len2];
    int k = low;
    for(int i = 0;i<len1;i++){
        arr1[i] = arr[k++];
        //k++;
    }
    for(int i = 0;i<len2;i++){
        arr2[i] = arr[k++];
    }
    // Merging two sorted arrays.
    int idx1 = 0;
    int idx2 = 0;
    k = low;
    while(idx1<len1&&idx2<len2){
        if(arr1[idx1]<arr2[idx2]){
            arr[k++] = arr1[idx1++];
        }
        else{
            arr[k++] = arr2[idx2++];
        }
    }
    while(idx1<len1){
        arr[k++] = arr1[idx1++];

    }
    while(idx2<len2){
        arr[k++] = arr2[idx2++];
    }
}
// Merge sorting.
void mergeSort(int arr[],int low,int high){
    int mid = low +(high-low)/2;
    while(low<=high){
        return;
    }
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,high);
}
int partitionSort(int arr[],int low,int high){
    int pivot = arr[high];// value of Pivot.
    int i = low-1;
    for(int j = low;j<high;j++){
        if(arr[j]<pivot){
            i++;
        
            int temp= arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    i++;
    int temp = arr[high];
    arr[high] = arr[i];
    arr[i] = temp;
    return i;// pivot index.
}
// Quick Sort Function.
void quickSort(int arr[], int low, int high){
    if(low<high){
    int pvtidx = partitionSort(arr,low,high);
    quickSort(arr,low,pvtidx-1);
    quickSort(arr,pvtidx+1,high);
    }
}
 // Bubble sort function.
int bublesort(int arr[],int n){
	printf("Bubble sorting\n");
	int swap= 0, cmp =0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swap++;
            }
            cmp++;
        }
    }
        printf("No of comparisons is %d and no of swapping is %d\n",cmp,swap);
}
// Selection sort function.
void selSort(int arr[], int n)
{
	printf("Selection Sorting\n");
	int cmp = 0;
	int swap = 0;
    for (int i = 0; i < n; i++)
    {
        int min = arr[i];
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                int temp = min;
                min = arr[j];
                arr[j] = temp;
                swap++;
            }
            cmp++ ;
        }
        arr[i] = min;
    }
        printf("No of comparisons is %d and no of swapping is %d\n",cmp,swap);
}
void insertSort(int arr[],int n){
    // Assume the array at index 0 is sorted.
    printf("INSERTION SORTING\n");
    int cmp = 0;
    int swap = 0;
    for(int i =0;i<n;i++){
        for(int j = i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swap++;
                cmp++;
            }
        }
    }
    printf("No of comparisons is %d and no of swapping is %d\n",cmp,swap);
}
void originalArr(int arr[],int n){
	
}
void printArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    char select ;
    printf("Enter the size of Array as Integer\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elemnts of Arrays\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("     Hi Sir,\n");
    printf("Great to know that you want to Sort your array\n");
    printf("Can you tell me please which sorting would you like to prefer\n\n");
    
    
    
    while(1){
        printf("Press 'I' for Insertion sorting ||  Press 'B' for Bubble sorting || Press 'S' for selection sorting\n");
printf("Press 'M' for Merge sorting || press 'Q' for Quick sorting ||press E for Exit\n");
scanf("\n%c",&select);
        switch(select){
            case 'I':
            insertSort(arr,n);
            printArray(arr,n);
            break;
            case 'B':
            bublesort(arr,n);
            printArray(arr,n);
            break;
            case 'S':
            selSort(arr,n);
            printArray(arr,n);
            break;
            case 'Q':
            quickSort(arr,0,n-1);
            printArray(arr,n);
            break;
            case 'M':
            mergeSort(arr,0,n-1);
            printArray(arr,n);
            break;
            case 'E':
            printf("ThankYou For using these functions\n I hope you Enjoy It.");
            return 0;
        }
    }
}

