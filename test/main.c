#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[10] =  {1,5,9,3,6,8,2,4,7};
	int i=0; 
	
    printf("before sort\n");
   	PrintArray(array, 10);
	printf("\n");
	
	printf("\n");
    
    InsertionSort(array, 10);

    printf("after sort\n");
    PrintArray(array, 10);
    
	return 0;
}

void PrintArray(int arr[], int len){
	int i;
	for(i = 0; i < len; i++)
		printf("%d ", arr[i]);
}

void MergeSort(int arr[], int left, int right) {
	if(left < right) {
		int middle = (left+right)/2;
		
		MergeSort(arr, left, middle);
		MergeSort(arr, middle+1, right);
		Merge(arr, left, middle, right);
	}
}

void Merge(int arr[], int l, int m, int r) {
	int i, j, k;
	int n1 = m-l+1, n2 = r-m;
	int left[n1], right[n2];
	
	for (i = 0; i < n1; i++)
		left[i] = arr[l+i];
	for (j = 0; j < n2; j++)
		right[j] = arr[m+1+j];

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2) {
		if(left[i] <= right[j]) {
			arr[k] = left[i];
			i++;	
		}
		else {
			arr[k] = right[j];
			j++;
		}
		k++;
	}
	
	while (i < n1) {
		arr[k] = left[i];
		i++;
		k++;
	}
	
	while (j < n2) {
		arr[k] = right[j];
		j++;
		k++;
	}
}

void swap(int *a, int *b){
	int temp=*a;
    *a=*b;
    *b=temp;
}

void BubbleSort(int arr[], int len){
	int i=0, j=0;
    for(i = 0; i < len; i++) {
        for(j = 0; j < len-1-i; j++) {
            if(arr[j+1] < arr[j]) {
            	swap(&arr[j+1],&arr[j]);
 	     	}
	   }
	}
}

void SelectionSort(int arr[], int len){
	int i=0, j=0, min;
	for(i=0;i<len-1;i++){
		min=i;
		for(j=i;j<len;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(i!=min){
			swap(&arr[min],&arr[i]);
		}
	}
}

void InsertionSort(int arr[], int len){
	int i, preIndex, n;
	for(i = 1; i < len; i++){
		preIndex=i-1;
		n=arr[i];
		while(n < arr[preIndex] && preIndex >= 0){
			arr[preIndex+1]=arr[preIndex];
			preIndex-=1;
		}
		arr[preIndex+1]=n;
	}
}







