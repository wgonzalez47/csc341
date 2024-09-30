//William Gonzalez
//9-30-2024
//CSC341
//Lab 4


#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main (int argc,char *argv[]){
	int *value;
	int z = 10;

	//pointer
	
	int *pointer1;


	//Printing address of argc
	printf("Address of argc: %p\n", (void*)&argc);

	//Printing address of Stack variable
	printf("Address of Stack variable: %p\n", (void*)&z);
	
	//Printing address of Heap Variable
	value = (int *)malloc(sizeof(int));
	printf("Address of Heap: %p\n", (void*)&value);

	//Printing uninitialized data
	printf("Address of uninitialized data: %p\n", (void*)&x);

	//Printing initialized data
	printf("Address of initialized date: %p\n", (void*)&y);

	return EXIT_SUCCESS;
}





