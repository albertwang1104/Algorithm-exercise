#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[10] =  {1,5,9,3,6,8,2,4,7};
	int i=0; 
	
    printf("before sort\n");
    	
	for(i=0;i<10;i++){
        printf("%d ", array[i]);
    }
	printf("\n");
	
	printf("\n");
    
    insertion_sort(array, 10);

    printf("after sort\n");
    
	for(i=0;i<10;i++){
        printf("%d ", array[i]);
    }
	return 0;
}

void merge_sort(int *arr, int len) {
	int i;
	while()
	//for(i = 0; i < len; i += 2) {}
				
	
}

void merge(int *left, *right) {
	
}
















void swap(int *a, int *b){
	int temp=*a;
    *a=*b;
    *b=temp;
}

void bubble_sort(int *arr, int len){
	int i=0, j=0;
    for(i = 0; i < len; i++) {
        for(j = 0; j < len-1-i; j++) {
            if(arr[j+1] < arr[j]) {
            	swap(&arr[j+1],&arr[j]);
 	     	}
	   }
	}
}

void selection_sort(int *arr, int len){
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

void insertion_sort(int *arr, int len){
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






