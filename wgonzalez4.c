//William Gonzalez
//9-12-2024
//CSC341
//Lab 4



#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int x;
int y = 100;

int compare(const void *a, const void *b) {
    return (*(uintptr_t *)b - *(uintptr_t *)a);
}


int main(int argc,char *argv[]){
	int stack1 = 10;
	int stack2 = 20;

	int *heap_var = (int *)malloc(sizeof(int));
	*heap_var = 30;

  	uintptr_t addresses[6] = {
        	(uintptr_t)&argc,  
        	(uintptr_t)&stack1,        
        	(uintptr_t)&stack2,         
		(uintptr_t)heap_var,                  
        	(uintptr_t)&y,        
        	(uintptr_t)&x        
    	};	
	qsort(addresses, 6, sizeof(uintptr_t), compare);
   	printf("Addresses from highest to lowest:\n");
    	for (int i = 0; i < 6; i++) {
        	printf("%p\n", (void *)addresses[i]);
       	}


	return 0;
}





