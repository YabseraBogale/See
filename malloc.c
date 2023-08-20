// falied at it my fault
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int* pointer=(int*) malloc(0);
	if(pointer==NULL){
		puts("Pointer is null");
	}
	else{
		puts((char)getpid(*pointer));
	}
	return 0;
}
