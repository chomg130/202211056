#include <stdio.h>
#include "stackS.h"

int main(void)
{
	element item;
	printf("\n** ���� ���� ���� **\n");
	printStack();
	//pop();
	push(1);
	printStack();
	push(2);
	printStack();
	push(3);
	printStack();
	
	item = peek();
	printStack();
	printf("peek => %d", item);

	item = pop();
	printStack();
	printf("\n pop => %d", item);

	item = pop();
	printStack();
	printf("\n pop => %d", item);

	item = pop();
	printStack();
	printf("\n pop => %d", item);

	getchar();
	return 0;
}