#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{	
	
	int array_size = 10000;
	srand((unsigned int)time(NULL));
	
	int array[array_size];
	int i;
	int *ptr = array;
	
	for (i = 0;i<array_size;i++){
		int a = rand();
		printf("%d \n",a);
		*(ptr+i)= a;
		
	}
	printf("==========================================");
	getchar();
	//printf("===== \n");
	for (i = 0;i<array_size;i++){
		int c = *ptr; 
		printf("%d \n",c);
		ptr++;
	}
}
