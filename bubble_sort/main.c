#include <stdio.h>
#include <stdlib.h>


int main() {
	int array[10] =  {1,5,9,3,6,8,2,4,7};
	int i=0; 
	void bubble(int *);
	
    printf("before sort\n");
    	
	for(i=0;i<10;i++){
        printf("%d ", array[i]);
    }
	printf("\n");
    
    bubble(array);

    printf("after sort\n");
    
	for(i=0;i<10;i++){
        printf("%d ", array[i]);
    }
	return 0;
}

void swap(int a, int b){
	int temp=0;
	temp=a;
    a=b;
    b=temp;
}

void bubble(int *array){
    int i=0,j=0,temp=0;
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9; j++) {
            if(array[j+1] < array[j]) {
            	swap(array[j+1],array[j]);
 	     	}
	    }
	}
    }

